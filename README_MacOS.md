## macOS / OSX Setup and ATAC Build Notes

These steps are for macOS users, especially Apple Silicon users, who want to clone, build, and test ATAC locally.

ATAC contains legacy files whose names differ only by case, such as `VERSION` and `version`. A normal macOS APFS volume is usually case-insensitive, so these files can collide during clone or extraction. This can corrupt the working tree before compilation even starts.

The safest workflow is to build ATAC inside a case-sensitive APFS workspace.

---

## Step 1: Wipe and Reset Everything

Use this step only if you already tried creating a workspace before. If this is your first attempt, start from Step 2.

```bash
# Move out of any active mounted workspace
cd ~/Documents

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

## Step 2: Create a Fresh Case-Sensitive Workspace

Create a new case-sensitive APFS sparse image.

```bash
hdiutil create -type SPARSE -size 1g -fs "Case-sensitive APFS" -volname AtacWorkspace ~/AtacWorkspace
```

You should see:

```text
created: /Users/<your-user-name>/AtacWorkspace.sparseimage
```

Important note: because the command uses `-type SPARSE`, macOS creates a `.sparseimage`, not a `.dmg`.

Mount the workspace:

```bash
hdiutil attach ~/AtacWorkspace.sparseimage
```

Enter the mounted volume:

```bash
cd /Volumes/AtacWorkspace
```

Check that the volume is really case-sensitive:

```bash
touch version VERSION
ls -l version VERSION
rm -f version VERSION
```

If both `version` and `VERSION` appear separately, the workspace is correct.

You can also create a case-sensitive APFS volume through Disk Utility, but the terminal method above is easier to reproduce.

Apple Disk Utility reference:

https://support.apple.com/en-ca/guide/disk-utility/dskua9e6a110/mac

---

## Step 3: Clone a Fresh Copy of the Repository

Run this inside the mounted case-sensitive workspace:

```bash
cd /Volumes/AtacWorkspace

git clone <YOUR-GITHUB-REPO-URL> atac-linux
```

Move into the ATAC source tree:

```bash
cd /Volumes/AtacWorkspace/atac-linux/upstream
```

---

## Step 4: Clean Old Build State

Run this before configuring or rebuilding.

```bash
make clean 2>/dev/null || true

rm -f config.cache config.log config.status
rm -f makefile
rm -f */*.o
rm -f atac_i/Pgram.c atac_i/Pgram.h atac_i/Pgram.o
rm -f atac_cpp/cexp.c atac_cpp/cexp.o atac_cpp/atac_cpp
rm -f cpp_ansi cpp_ansi.c
```

---

## Step 5: Configure with a Local Install Prefix

Do not install into `/usr/local`. Keep the install local inside the repository.

Also, on macOS, use `-lcurses`, not Fedora’s `-lncurses`.

```bash
unset CC
unset CFLAGS
unset CPPFLAGS
unset LDFLAGS
unset LIBS

CC=clang \
CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
LIBS="-lcurses" \
./configure --prefix="$PWD/_install"
```

The local prefix should be:

```text
/Volumes/AtacWorkspace/atac-linux/upstream/_install
```

---

## Step 6: Build the Core ATAC Binaries

Do not run plain `make` on macOS. Some subdirectory rules ignore the exported shell flags, so pass the compatibility settings directly to `make`.

Use the stronger macOS build command:

```bash
make \
  CC="clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
  CFLAGS="-O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64" \
  LIBS="-lcurses"
```

The `BITS_PER_*` and `HOST_BITS_PER_*` definitions are needed because the legacy ATAC preprocessor code expects old machine-size macros that Apple Clang does not provide by default.

After the build, verify that the core binaries exist:

```bash
ls -l atac_i/atac_i atac_cpp/atac_cpp atacysis/atacysis tools/atacCC tools/hili tools/minimize tools/atac_rt.o
```

files include:

```text
atac_i/atac_i
atac_cpp/atac_cpp
atacysis/atacysis
tools/atacCC
tools/hili
tools/minimize
tools/atac_rt.o
```

Warnings about old-style prototypes are expected. They are not blockers unless the build stops with an error.

---

## Step 7: Fix the `cpp_ansi.c` Feature Test

The next failure may happen during `make LIB`. At first, this looks confusing because the main binaries may already be built successfully, but the installation step can still fail.

The error comes from a temporary file called `cpp_ansi.c` that the Makefile generates during the `LIB` target. The generated file contains this old C-style function:

```c
main(){return *(m(x))=='x';}
```

Apple Clang rejects this because `main()` has no explicit return type. Older C compilers accepted this style by assuming `int`, but modern Clang does not allow it in this build context.

I checked the top-level `makefile` and found the rule that creates `cpp_ansi.c`. The issue was not in a permanent source file. It was in the Makefile line that writes this temporary test program every time `make LIB` runs. Editing `cpp_ansi.c` directly would not solve the problem because the file is regenerated.

The same Makefile rule also used `cc` directly:

```make
@cc -o cpp_ansi cpp_ansi.c
```

This bypasses the custom compiler command passed through `CC`.

The fix is to update the Makefile rule manually so that the generated test program uses an explicit return type and the compile command respects `$(CC)`.

Before:

```make
@echo "main(){return *(m(x))=='x';}" >>cpp_ansi.c
@cc -o cpp_ansi cpp_ansi.c
```

After:

```make
@echo "int main(void){return *(m(x))=='x';}" >>cpp_ansi.c
@$(CC) -o cpp_ansi cpp_ansi.c
```

Make the same change in both `makefile` and `makefile.in`. This matters because running `configure` again can regenerate `makefile` from `makefile.in`.

A safe way to apply the edit is:

```bash
cd /Volumes/AtacWorkspace/atac-linux/upstream

python3 - <<'PY'
from pathlib import Path

for fname in ["makefile", "makefile.in"]:
    p = Path(fname)
    if not p.exists():
        continue

    s = p.read_text()

    s = s.replace(
        '@echo "main(){return *(m(x))==\'x\';}" >>cpp_ansi.c',
        '@echo "int main(void){return *(m(x))==\'x\';}" >>cpp_ansi.c'
    )

    s = s.replace(
        '@cc -o cpp_ansi cpp_ansi.c',
        '@$(CC) -o cpp_ansi cpp_ansi.c'
    )

    p.write_text(s)
    print(f"patched {fname}")
PY
```

Verify that the patch applied before running `make LIB` again:

```bash
grep -n "cpp_ansi.c" makefile | sed -n '1,20p'
grep -n "int main(void)" makefile
grep -n '\$(CC) -o cpp_ansi' makefile
```

You should see:

```make
@echo "int main(void){return *(m(x))=='x';}" >>cpp_ansi.c
@$(CC) -o cpp_ansi cpp_ansi.c
```

If you still see this line, stop and patch the Makefile again:

```c
main(){return *(m(x))=='x';}
```

Remove any old generated feature-test file:

```bash
rm -f cpp_ansi cpp_ansi.c
```

This fix is limited to a small installation-time feature test. It does not change ATAC’s runtime logic.

---

## Step 8: Install Runtime Layout Locally

Run `make LIB` with the same macOS compiler settings.

```bash
make LIB \
  CC="clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
  CFLAGS="-O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64" \
  LIBS="-lcurses"
```

Then install the command wrappers:

```bash
make BIN
```

Add the local ATAC installation to your shell path:

```bash
export PATH="$PWD/_install/bin:$PATH"
```

Verify the installation:

```bash
which atacCC
which ataclib
ataclib
```


Check the runtime directory:

```bash
find "$PWD/_install/lib/atac" -maxdepth 1 -type f -print
```

Expected runtime files include:

```text
atac_i
atac_cpp
atacysis
atac_to_bin
minimize
hili
predefs
predefs.c
atac_rt.o
loguse
Version
cpp_ansi
```

---

## Step 9: Baseline Tutorial Build Without ATAC

Before testing instrumentation, confirm that the tutorial program works normally.

```bash
cd /Volumes/AtacWorkspace/atac-linux/upstream/tutorial

make clean 2>/dev/null || true
rm -f *.o wordcount *.atac wordcount.trace

make
./wordcount input1
./wordcount -lwc input1
```

The output should be like:

```text
1 line, 4 words, 19 characters
```

This confirms that the tutorial program itself is valid.

---

## Step 10: Build the Tutorial with `atacCC`

Clean the tutorial directory again:

```bash
make cleanup 2>/dev/null || true
rm -f *.o wordcount *.atac wordcount.trace
```

Build with ATAC instrumentation:

```bash
make CC=atacCC CFLAGS="-I. -O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion"
```

generated files:

```text
main.atac
wc.atac
main.o
wc.o
wordcount
```

Verify:

```bash
ls -l *.atac *.o wordcount
```

If this step fails on macOS system headers or parser behavior, capture the full error. Fedora required additional tutorial-level parser flags, but macOS may expose different header behavior.

---

## Step 11: Run the Instrumented Tutorial Program

Run the tutorial tests:

```bash
./wordcount input1
./wordcount -lwc input1
```

Optional additional tests:

```bash
./wordcount -l input1
./wordcount -w input1
./wordcount -c input1
./wordcount -lw input1
./wordcount -lc input1
./wordcount -wc input1
echo "hello world" | ./wordcount
```

Check for trace generation:

```bash
ls -l wordcount.trace
```


---

## Step 12: Generate the Coverage Summary

Use the `.atac` metadata files, not the `.c` source files.

```bash
atac -s -f wordcount.trace main.atac wc.atac
```

The expected format is a coverage table with rows for:

```text
main
print
count
== total ==
```

---

## Common macOS Failure Points

### Failure: `hdiutil create failed - Invalid argument`

Use the exact case-sensitive filesystem name:

```bash
hdiutil create -type SPARSE -size 1g -fs "Case-sensitive APFS" -volname AtacWorkspace ~/AtacWorkspace
```

Then attach the `.sparseimage` file:

```bash
hdiutil attach ~/AtacWorkspace.sparseimage
```

Do not attach `~/AtacWorkspace.dmg` unless you actually created a `.dmg`.

---

### Failure: `C compiler cannot create executables`

Clear old variables and avoid Fedora-specific linker flags.

```bash
unset CC
unset CFLAGS
unset CPPFLAGS
unset LDFLAGS
unset LIBS
```

Then configure with:

```bash
CC=clang \
CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
LIBS="-lcurses" \
./configure --prefix="$PWD/_install"
```

If this still fails, inspect:

```bash
tail -80 config.log
```

---

### Failure: `yylex` or `yyerror` undeclared in `Pgram.c`

Do not run plain `make`.

Use:

```bash
make \
  CC="clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion" \
  CFLAGS="-O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64" \
  LIBS="-lcurses"
```

---

### Failure: `BITS_PER_UNIT` or `HOST_BITS_PER_LONG` undeclared

Use the stronger macOS `CFLAGS`:

```bash
CFLAGS="-O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64"
```

---

### Failure: `cpp_ansi.c` rejects `main()`

Patch `makefile` and `makefile.in` as described in Step 7.

This error means `make LIB` is still generating:

```c
main(){return *(m(x))=='x';}
```

The Makefile must generate:

```c
int main(void){return *(m(x))=='x';}
```

---

### Failure: `Permission denied` under `/usr/local`

You configured without a local prefix.

Reconfigure with:

```bash
./configure --prefix="$PWD/_install"
```

Do not use `sudo` for this porting workflow. Keep the install inside the repository.
