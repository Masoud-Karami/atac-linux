# Automatic Test Analyzer in C (ATAC) macOS / OSX Setup

These notes explain how to build and test ATAC on macOS, especially on Apple Silicon.

ATAC is a legacy C tool, so a modern macOS system needs a few small compatibility fixes before the build works cleanly.

The original ATAC project is maintained at:
https://invisible-island.net/atac/

The most important point is that the repository must be cloned inside a case-sensitive filesystem. ATAC contains files whose names differ only by case, such as `VERSION` and `version`. On the default macOS filesystem, these names can collide and damage the source tree before the build even starts.
- https://stackoverflow.com/questions/25575463/git-macos-case-sensitive-overwrite-issues

You can also create a case-sensitive APFS volume through Disk Utility, but the terminal method in the following is easier to reproduce.

Apple Disk Utility reference:
https://support.apple.com/en-ca/guide/disk-utility/dskua9e6a110/mac

---

## Source

- Source archive: atac-20131208.tgz
- Source URL: https://invisible-island.net/archives/atac/
- Tutorial: https://invisible-island.net/atac/atac-tutorial.pdf

## Goals

1. Build ATAC from source on MacOS MacBooke M1.
2. Identify build and portability issues.
3. Make minimal source or build-system changes.
4. Validate the result using the tutorial `wordcount` example.
5. Document all changes in a reproducible way.

## Structure

- `upstream/`: original ATAC source, imported unchanged in the first commit.
- `PORTING_NOTES.md`: chronological notes of commands, failures, changes, and validation.
- `patches/`: optional exported patches.
- `logs/`: selected configure/build/test logs.

# Installation Guide on MacBooke Apple Air M1 2020 (macOS Tahoe Version 26.1)


## Step 0: Create a Case-Sensitive APFS Workspace
_Use this step only if you already tried creating a workspace before. If this is your first attempt, start from Step 1_

```bash
# Detach the old workspace if it is mounted
hdiutil detach /Volumes/AtacWorkspace 2>/dev/null || true
hdiutil detach -force /Volumes/AtacWorkspace 2>/dev/null || true

# Delete old image files from previous attempts
rm -f ~/AtacWorkspace.dmg
rm -f ~/AtacWorkspace.sparseimage

# Confirm they are gone. No output means they were removed.
ls -l ~/AtacWorkspace.dmg ~/AtacWorkspace.sparseimage 2>/dev/null
```

---


## Step 1: Create a Case-Sensitive APFS Workspace

Create a case-sensitive sparse image. 
_Important note:_ because the command uses `-type SPARSE`, macOS creates a `.sparseimage`, not a `.dmg`.

```bash
hdiutil create -type SPARSE -size 1g -fs "Case-sensitive APFS" -volname AtacWorkspace ~/AtacWorkspace
```

This creates the file below.

```bash
~/AtacWorkspace.sparseimage
```

Mount and Enter

```bash
hdiutil attach ~/AtacWorkspace.sparseimage
cd /Volumes/AtacWorkspace
```

Check that the workspace is case-sensitive.

```bash
touch version VERSION
ls -l version VERSION
#  If both `version` and `VERSION` appear as separate files, the workspace is correct.
```

```bash
rm -f version VERSION
```


---

## Step 2: Clone a Fresh Repository

Clone ATAC inside the case-sensitive workspace.

```bash
cd /Volumes/AtacWorkspace
git clone <YOUR-GITHUB-REPO-URL> atac-MacOS # or another branch from the main repo
cd /Volumes/AtacWorkspace/atac-linux/upstream
```

---

## Step 3: Patch the `cpp_ansi.c` Feature Test Manually

Before building, edit both files below.

```text
makefile.in
makefile
```

If `makefile` does not exist yet, edit `makefile.in` first, run `configure`, then edit the generated `makefile` later exactly the same way as here.

The installation at this step stpped with two problems inside the makefile.in
Find these lines:

```make
@echo "main(){return *(m(x))=='x';}" >>cpp_ansi.c
@cc -o cpp_ansi cpp_ansi.c
```
In the first line, Apple Clang does not accept the old implicit `-int` form of `main()` in this generated test file
Second, the original rule calls `cc` directly. That bypasses the compiler command we pass through `CC`. Using `$(CC)` keeps the build consistent.
Fix them by modifying to:

```make
@echo "int main(void){return *(m(x))=='x';}" >>cpp_ansi.c
@$(CC) -o cpp_ansi cpp_ansi.c
```

This fixes two problems.

First, Apple Clang does not accept the old implicit-`int` form of `main()` in this generated test file.

Second, the original rule calls `cc` directly. That bypasses the compiler command passed through `CC`. Using `$(CC)` keeps the build consistent.

Do not edit `cpp_ansi.c` directly. It is generated during `make LIB`, so a direct edit would be overwritten.

---

## Step 4: Configure with a Local Install Prefix

Keep the installation inside the repository.

```bash
./configure --prefix="$PWD/_install" \
CC="clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
CFLAGS="-O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64" \
LIBS="-lcurses"
```

_Note_, on macOS, use `-lcurses`, not Linux’s `-lncurses`.

---

## Step 5: Patch the ATAC Runtime for Apple Silicon

On Apple Silicon, pointers are 64-bit, but `int` is 32-bit. The ATAC runtime passes a table pointer through an `int`, then casts it back to a pointer. This causes a crash inside `aTaC`.

Open this file.

```text
tools/atac_rt.c
```

Find this declaration.

```c
extern int aTaC(int level, int blk);
```

Change it to this.

```c
extern int aTaC(int level, long blk);
```

Then find this function definition.

```c
int
aTaC(int level,
     int blk)
```

Change it to this.

```c
int
aTaC(int level,
     long blk)
```

As a consequence of this modificatio, another error appears that the `linect`, `wordct`, and `charct` are `int`, not `long`. This caused the huge wrong numbers like 8589934593. On arm64 this corrupts argument reading and also damages the following %s filename argument. So we fix the bad `printf("%ld", int)` format strings by modifying 

```c
printf(" %7ld", linect);
printf(" %7ld", wordct);
printf(" %7ld", charct);
```

into 
```c
printf(" %7d", linect);
printf(" %7d", wordct);
printf(" %7d", charct);
```

This is the key MacOS runtime fix. Without it, the instrumented tutorial program can crash immediately when it enters the ATACs runtime.

Some compiler warnings may remain after this change, especially around format strings in `tools/atac_rt.c`. These warnings are not the main focus to be fixed here.

---

## Step 6: Build ATAC

Do not run plain `make` on macOS. Pass the compiler settings directly to `make`.

Clean the generated feature-test and parser files first.

```bash
rm -f atac_i/Pgram.c atac_i/Pgram.h atac_i/Pgram.o
rm -f cpp_ansi cpp_ansi.c
```

Build ATAC.
Do not run plain `make` on macOS. Run the entire command as

```bash
make \
CC="clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
CFLAGS="-O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64" \
LIBS="-lcurses"
```

The `BITS_PER_*` and `HOST_BITS_PER_*` definitions are needed because the old ATAC preprocessor expects machine-size macros that Apple Clang does not define by default.


---

## Step 7: Install the Runtime Layout Locally

Clean the generated feature-test files again.

```bash
rm -f cpp_ansi cpp_ansi.c
```

Build the runtime layout.

```bash
make LIB \
CC="clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
CFLAGS="-O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64" \
LIBS="-lcurses"
```

Then install the command wrappers.

```bash
make BIN
```

Add the local tools to the current shell.

```bash
export PATH="$PWD/_install/bin:$PATH"
```

Verify the installed commands.

```bash
which atac
which atacCC
which ataclib
ataclib
atac -v # Milestone: We have now reached the first command of the tutorial (https://invisible-island.net/atac/atac-tutorial.pdf). Everything done prior to this was the essential pre-installation phase—setting up our case-sensitive volume, resolving compiler errors, and compiling the core binaries.
```

The version command should report ATAC release `3.3.13`.

Also check the runtime directory.

```bash
find "$PWD/_install/lib/atac" -maxdepth 1 -type f -print | sort
```

Important files include the following.

```text
atac_i
atac_cpp
atacysis
atac_to_bin
atac_rt.o
hili
minimize
predefs
predefs.c
cpp_ansi
loguse
Version
```

---

## Step 8: Patch the Tutorial Source

Move to the tutorial directory.

```bash
cd /Volumes/AtacWorkspace/atac-linux/upstream/tutorial
```

Open this file.

```text
main.c
```

At the very top of the file, before `main`, add this declaration.

```c
static int print();
```

This avoids the conflict where `print()` is called before its later static definition.

In the same file, find these three lines.

```c
printf(" %7ld", linect);
printf(" %7ld", wordct);
printf(" %7ld", charct);
```

Change them to this.

```c
printf(" %7d", linect);
printf(" %7d", wordct);
printf(" %7d", charct);
```

The counters are `int`, not `long`. On arm64, the old `%ld` format produced incorrect values such as `8589934593` and also damaged the following filename output.

---

## Step 9: Build and Test the Normal Tutorial Program

The normal baseline build should use Apple’s real system headers. Do not use the local `stdio.h` shim for this step.

Remove any old shim.

```bash
rm -f stdio.h
```

Clean old generated files.

```bash
find . -maxdepth 1 \( -name '*.o' -o -name '*.atac' -o -name 'wordcount.trace' -o -name 'wordcount' \) -delete
```

Build the normal tutorial program.

```bash
make \
CC="clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
CFLAGS="-I. -O2"
```

Run the baseline checks.

```bash
./wordcount input1
./wordcount -lwc input1
```

This confirms that the tutorial program itself works normally before ATAC instrumentation.

---

## Step 10: Add a Local `stdio.h` Shim for ATAC Instrumentation Only

ATAC’s old parser cannot handle modern macOS SDK headers cleanly. For the tutorial instrumentation step, add a small local `stdio.h` file in the tutorial directory.

Use this shim only for the ATAC build, not for the normal baseline build.

Create this file.

```text
stdio.h
```

Add this content.

```c
#ifndef ATAC_TUTORIAL_STDIO_H
#define ATAC_TUTORIAL_STDIO_H

#define EOF (-1)
#define NULL ((void *)0)

typedef struct __sFILE FILE;

extern FILE *fopen();
extern int fclose();
extern int getc();
extern int fgetc();
extern int printf();
extern int fprintf();
extern int fputs();
extern int puts();

extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;

#define stdin  __stdinp
#define stdout __stdoutp
#define stderr __stderrp

#endif
```

This keeps the ATAC parser away from the full Apple SDK header tree.

---

## Step 11: Build the Tutorial with `atacCC`

Clean the tutorial directory.

```bash
find . -maxdepth 1 \( -name '*.o' -o -name '*.atac' -o -name 'wordcount.trace' -o -name 'wordcount' \) -delete
```

Build with ATAC instrumentation.

```bash
make \
CC=atacCC \
CFLAGS="-I. -O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion"
```

Verify that the expected files were created.

```bash
ls -l main.atac wc.atac main.o wc.o wordcount
```

---

## Step 12: Run the Instrumented Program

Run the first tutorial tests.

```bash
./wordcount input1
./wordcount -lwc input1
```

Check that a trace file was created.

```bash
ls -l wordcount.trace
head -20 wordcount.trace
```

Generate the first coverage summary.

```bash
atac -s -f wordcount.trace main.atac wc.atac
```

A successful summary has rows for these functions.

```text
main
print
count
== total ==
```

An observed macOS result after the first basic tests was this.

```text
% blocks      % decisions   % C-Uses      % P-Uses      function
------------- ------------- ------------- ------------- ------------- 
74(23/31)     65(11/17)     58(38/66)     60(6/10)      main
100(8)        50(3/6)       100(4)        50(3/6)       print
100(14)       100(12)       75(12/16)     93(14/15)     count
85(45/53)     74(26/35)     63(54/86)     74(23/31)     == total ==
```

---

## Step 13: Continue the ATAC Tutorial Tests

Run more tutorial-style tests.

```bash
./wordcount -x
./wordcount nosuchfile
./wordcount input1 input2
```

The invalid option test should print this.

```text
invalid option: -x
usage: wc [-lwc] [files]
```

The missing file test should print this.

```text
nosuchfile: No such file or directory
```

Then rerun coverage.

```bash
atac -s -f wordcount.trace main.atac wc.atac
```

After several tests, one observed coverage summary was this.

```text
% blocks      % decisions   % C-Uses      % P-Uses      function
------------- ------------- ------------- ------------- ------------- 
100(31)       94(16/17)     77(51/66)     100(10)       main
100(8)        50(3/6)       100(4)        50(3/6)       print
100(14)       100(12)       81(13/16)     93(14/15)     count
100(53)       89(31/35)     79(68/86)     87(27/31)     == total ==
```

This confirms that the ATAC trace and coverage workflow works on macOS after the compatibility patches.

---

## Current macOS Status

Validated items:

- ATAC builds on macOS and Apple Silicon inside a case-sensitive APFS workspace.
- `make LIB` and `make BIN` complete with a local install prefix.
- `atac`, `atacCC`, and `ataclib` are available from `_install/bin`.
- The tutorial can be built normally with Clang compatibility flags.
- The tutorial can be instrumented with `atacCC`.
- `main.atac`, `wc.atac`, `wordcount.trace`, and coverage summaries are generated.

Remaining limitation:

The ATAC-instrumented `wordcount` binary can still print incorrect wordcount values in some macOS arm64 runs, especially around `stdin` or repeated tutorial tests. The baseline non-instrumented binary prints correct values.

So, the macOS coverage workflow is validated, but full semantic equivalence of the instrumented executable output is not fully resolved yet.

---

## Correct Use of `atac -f`

This ATAC version does not accept this command.

```bash
atac -f wordcount.trace main.atac wc.atac
```

The `-f` option is valid with summary mode.

```bash
atac -s -f wordcount.trace main.atac wc.atac
```

For the plain interactive-style command, pass the trace file as a normal file.

```bash
atac wordcount.trace main.atac wc.atac
```

Or run ATAC without explicitly passing the trace file.

```bash
atac main.atac wc.atac
```

Use the first form when you want to include `wordcount.trace` explicitly. Use the second form when the tool can infer or interactively load the needed coverage data.

---

## Common macOS Failure Points

### `yylex` or `yyerror` undeclared in `Pgram.c`

This means the parser file is being compiled without the GNU89 compatibility flags.

Do not run plain `make`.

Use the full macOS build command from Step 6.

---

### `BITS_PER_UNIT` or `HOST_BITS_PER_LONG` undeclared

Use these definitions in `CFLAGS`.

```bash
-DBITS_PER_UNIT=8
-DBITS_PER_WORD=64
-DHOST_BITS_PER_INT=32
-DHOST_BITS_PER_LONG=64
```

---

### `cpp_ansi.c` fails on `main()`

Patch `makefile` and `makefile.in` manually as described in Step 3.

The Makefile must generate this line.

```c
int main(void){return *(m(x))=='x';}
```

It must not generate this old form.

```c
main(){return *(m(x))=='x';}
```

---

### `stdio.h: No such file or directory` or Apple SDK parse errors during `atacCC`

Use the local tutorial-only `stdio.h` shim from Step 10.

Do not use the shim for the normal baseline build.

---

### Instrumented binary crashes inside `aTaC`

Patch `tools/atac_rt.c` so that `aTaC` receives `blk` as `long`, not `int`.

This avoids truncating a 64-bit pointer on Apple Silicon.

---

### Huge wrong numbers such as `8589934593`

Patch `tutorial/main.c` so that the counter print statements use `%7d`, not `%7ld`.

The variables are `int`.

---

### `atac -f wordcount.trace main.atac wc.atac` reports incompatible flags

Use summary mode.

```bash
atac -s -f wordcount.trace main.atac wc.atac
```

Or pass the trace file as a normal file.

```bash
atac wordcount.trace main.atac wc.atac
```

---

## Manual Editing Summary

The required edits are small and should be done manually.

1. Create a case-sensitive APFS workspace before cloning the repository.
2. Patch `makefile.in` and, after configuration, the generated `makefile`.
3. Configure with a local install prefix and macOS-compatible compiler flags.
4. Patch `tools/atac_rt.c` so the runtime does not truncate a 64-bit pointer.
5. Build ATAC using the full macOS `make` command, not plain `make`.
6. Install the local runtime layout with `make LIB` and `make BIN`.
7. Patch `tutorial/main.c` by adding the forward declaration for `print()`.
8. Patch the three tutorial counter format strings from `%7ld` to `%7d`.
9. Build the tutorial normally first, without the `stdio.h` shim.
10. Add the local `stdio.h` shim only before using `atacCC`.
11. Build the tutorial with `atacCC`.
12. Run the tutorial tests and generate coverage using `atac -s -f wordcount.trace main.atac wc.atac`.

These steps keep the build reproducible and avoid automatic source rewrites. Each change is small enough to review directly in the affected file.
