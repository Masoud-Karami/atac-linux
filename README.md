# ATAC Linux Porting Exercise

This repository documents a porting and validation exercise for **ATAC**, the Automatic Test Analyzer for C, on a modern x86_64 Linux system.

ATAC is a legacy C test-coverage tool originally distributed through the Invisible Island archive. This repository is not a new ATAC distribution. Its purpose is to document the build process, failures, minimal compatibility changes, and tutorial-level validation needed to run ATAC on modern systems.

Original ATAC project:

https://invisible-island.net/atac/

Tutorial used for validation:

https://invisible-island.net/atac/atac-tutorial.pdf

---

## Project Status

The ATAC tutorial workflow has been validated end-to-end on Fedora Linux.

Verified stages:

- [x] Native tutorial build with `gcc`
- [x] Native `wordcount` execution
- [x] `atacCC` wrapper discovery
- [x] `ataclib` runtime path resolution
- [x] Instrumented tutorial build with `atacCC`
- [x] Generation of `.atac` static metadata files
- [x] Execution of the instrumented binary
- [x] Generation of `wordcount.trace`
- [x] Coverage summary generation with `atac -s`

The final tutorial coverage report was successfully produced from:

- `main.atac`
- `wc.atac`
- `wordcount.trace`

Observed total coverage from the validated tutorial run:

| Metric | Result |
| :-- | :-- |
| Blocks | 85% (45/53) |
| Decisions | 74% (26/35) |
| C-Uses | 63% (54/86) |
| P-Uses | 74% (23/31) |

---

## Repository Purpose

This repository is intended to support reproducibility and review. It records how the old ATAC source was made to compile and run on a modern Linux system with minimal changes.

Main goals:

1. Build ATAC from source on modern Linux.
2. Identify build and portability issues.
3. Apply minimal source or build-system changes.
4. Validate the result using the official tutorial `wordcount` example.
5. Document each failure with root-cause analysis and verification evidence.

---

## Source

- Source archive: `atac-20131208.tgz`
- Source URL: https://invisible-island.net/archives/atac/
- Tutorial: https://invisible-island.net/atac/atac-tutorial.pdf

---

## Tested Environment

The current validation was performed on:

| Item | Value |
| :-- | :-- |
| Operating system | Fedora Linux |
| Architecture | x86_64 |
| Compiler | GCC 15 |
| Main source directory | `~/atac-linux/upstream` |
| Tutorial directory | `~/atac-linux/upstream/tutorial` |
| Install prefix | `~/atac-linux/upstream/_install` |
| ATAC runtime directory | `~/atac-linux/upstream/_install/lib/atac` |
| GCC internal headers | `/usr/lib/gcc/x86_64-redhat-linux/15/include` |

Other Linux distributions, macOS setups, Windows filesystems, or GCC versions may expose additional compatibility issues.

---

## Repository Structure

Typical layout:

| Path | Purpose |
| :-- | :-- |
| `upstream/` | ATAC source tree used for the porting exercise |
| `logs/` | Selected configure, build, and validation logs |
| `patches/` | Optional exported patches |
| `PORTING_NOTES.md` | Chronological debugging notes and root-cause analysis |
| `README.md` | Project overview and reproduction guide |

---

## Fedora Dependencies

On Fedora, install the required development tools and libraries:

```bash
sudo dnf group install "Development Tools"
sudo dnf install ncurses-devel bison byacc
```

The `ncurses-devel` package is required because modern Fedora resolves legacy terminal-display symbols, such as `vidattr`, through ncurses.

---

## Fedora Build Configuration

ATAC is a legacy C codebase. It uses older C conventions such as K&R-style declarations, implicit function declarations, and implicit `int` return types. Modern GCC is stricter, so GNU89-compatible flags are required.

From the top-level source directory:

```bash
cd ~/atac-linux/upstream

export CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int"
export LIBS="-lncurses"

mkdir -p ../logs

./configure --prefix="$PWD/_install" 2>&1 | tee ../logs/configure.txt
make 2>&1 | tee ../logs/make.txt
```

---

## Installation and Runtime Layout

The ATAC wrapper scripts require a working installation layout. In particular, `atacCC` calls `ataclib` to locate the runtime helper tools.

The important runtime helpers include:

- `atac_i`
- `atac_cpp`
- `atacysis`
- `atac_to_bin`
- `minimize`
- `hili`
- `predefs`
- `loguse`
- `atac_rt.o`

Complete the runtime library and binary wrapper installation from the top-level source directory:

```bash
cd ~/atac-linux/upstream

make LIB
make BIN

export PATH="$PWD/_install/bin:$PATH"
```

Verify wrapper discovery:

```bash
which atacCC
which ataclib
ataclib
```

Expected `ataclib` output:

```text
/home/hpc/atac-linux/upstream/_install/lib/atac
```

---

## Tutorial Validation Workflow

The official ATAC tutorial was used as the final validation path.

Go to the tutorial directory:

```bash
cd ~/atac-linux/upstream/tutorial
```

### 1. Baseline GCC Build

First verify that the tutorial program works without ATAC instrumentation:

```bash
make
./wordcount input1
./wordcount -lwc input1
```

Expected output should report:

```text
1 line, 4 words, 19 characters
```

This confirms that the tutorial program is a valid baseline target.

### 2. Clean Tutorial Artifacts

```bash
make cleanup
rm -f *.o wordcount *.atac wordcount.trace
```

### 3. Build with ATAC Instrumentation

Modern GCC stores compiler-provided headers such as `stddef.h` and `stdarg.h` in an internal include directory. The legacy `atacCC` wrapper does not automatically discover this path, so it must be passed explicitly.

```bash
GCC_INC=$(gcc -print-file-name=include)

make CC=atacCC CFLAGS="-I. -I$GCC_INC -D__builtin_va_list=char -O2 -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch -std=gnu89"
```

Expected generated files:

```text
main.atac
wc.atac
main.o
wc.o
wordcount
```

### 4. Run the Instrumented Program

```bash
./wordcount input1
./wordcount -lwc input1
```

Additional option combinations can be used to exercise more command-line branches:

```bash
./wordcount -l input1
./wordcount -w input1
./wordcount -c input1
./wordcount -lw input1
./wordcount -lc input1
./wordcount -wc input1
```

To test the stdin path without interactive waiting:

```bash
echo "hello world" | ./wordcount
```

### 5. Generate and Inspect Trace Data

```bash
rm -f wordcount.trace

./wordcount input1
./wordcount -lwc input1

ls -l wordcount.trace
```

Expected trace file:

```text
wordcount.trace
```

### 6. Generate Coverage Summary

```bash
atac -s -f wordcount.trace main.atac wc.atac
```

Validated coverage output:

```text
% blocks      % decisions   % C-Uses      % P-Uses      function
------------- ------------- ------------- ------------- -------------
74(23/31)     65(11/17)     58(38/66)     60(6/10)      main
100(8)        50(3/6)       100(4)        50(3/6)       print
100(14)       100(12)       75(12/16)     93(14/15)     count
85(45/53)     74(26/35)     63(54/86)     74(23/31)     == total ==
```

---

## macOS / OSX Users

Modern Apple systems usually use **APFS** in a case-insensitive mode by default. This matters for ATAC because the legacy source tree contains files whose names differ only by letter case.

Examples of risky filename pairs include:

- `VERSION` and `version`
- `INSTALL`, `install.sh`, and `install-sh`

On a case-insensitive filesystem, these names can collide. The result may look like files were deleted or modified immediately after cloning or extracting the archive, even before any real edit was made. This is not a Git bug and not an editor bug. It is a filesystem compatibility issue.

This problem can also appear on Windows because typical NTFS setups are also case-insensitive by default.

---

## Recommended macOS Fix: Use a Case-Sensitive Workspace

Do not rely on `git config core.ignorecase false` inside a normal macOS home directory. That setting changes Git’s tracking behavior, but it does not change what the filesystem can physically represent.

The safer approach is to create a small case-sensitive APFS disk image and do the ATAC work inside that mounted volume.

### 1. Create a Case-Sensitive APFS Disk Image

```bash
hdiutil create -size 1g -fs "case-sensitive APFS" -volname "AtacWorkspace" ~/Documents/AtacWorkspace.dmg
```

If your macOS version rejects the filesystem string, try:

```bash
hdiutil create -size 1g -fs APFSX -volname "AtacWorkspace" ~/Documents/AtacWorkspace.dmg
```

### 2. Mount the Disk Image

```bash
hdiutil attach ~/Documents/AtacWorkspace.dmg
```

The volume should appear under:

```text
/Volumes/AtacWorkspace
```

### 3. Work Inside the Case-Sensitive Volume

```bash
cd /Volumes/AtacWorkspace
```

Clone the repository inside this mounted volume:

```bash
git clone <YOUR-GITHUB-REPO-URL>
```

Or extract the original archive there:

```bash
tar -xzvf /path/to/atac-20131208.tgz
```

Inside this volume, files such as `VERSION` and `version` can coexist correctly.

### 4. Open the Folder in VS Code

Open VS Code and choose:

```text
File > Open Folder
```

Then select the project folder inside:

```text
/Volumes/AtacWorkspace
```

This avoids the file-collision problems seen when the repository is opened from a normal case-insensitive macOS directory.

---

## macOS Notes

The validated build in this repository was performed on Fedora Linux, not macOS. The macOS instructions above address the filesystem collision problem, which happens before compilation. Building ATAC natively on macOS may require additional changes because the compiler, system headers, terminal libraries, and linker behavior differ from Linux.

For Apple Silicon machines, a Linux virtual machine or container with a case-sensitive filesystem may be the most predictable path if the goal is to reproduce the Fedora validation workflow closely.

---

## Bug Ledger

The following table summarizes the main failures encountered during the port.

| ID | Severity | Category | Location | Symptom | Status |
| :-- | :-- | :-- | :-- | :-- | :-- |
| ERR-001 | Block | Linkage conflict | `tutorial/main.c` | `static declaration of 'print' follows non-static declaration` | Resolved |
| ERR-002 | Block | Terminal library | Link stage | `unresolved reference to vidattr` | Resolved |
| ERR-003 | Major | Legacy C syntax | ATAC source | `implicit declaration of function` | Handled with flags |
| ERR-004 | Major | Legacy C syntax | ATAC source / feature tests | `return type defaults to 'int'` | Handled with flags and Makefile patch |
| ERR-005 | Medium | Build logic | `cpp_ansi.c` feature test | `make LIB` feature-test failure | Resolved |
| ERR-006 | Block | Wrapper discovery | Shell / Make | `make: atacCC: No such file or directory` | Resolved |
| ERR-007 | Block | Runtime layout | `atacCC` wrapper | `ataclib: command not found`, `/atac_cpp: No such file or directory` | Resolved |
| ERR-008 | Block | GCC header discovery | system headers | `stddef.h` and `stdarg.h` not found | Resolved |
| ERR-009 | Medium | Parser compatibility | GCC `stdarg.h` | parse error at `__gnuc_va_list` | Workaround applied |
| ERR-010 | Medium | Parser compatibility | `tutorial/main.c` | parse error on `//` comment | Resolved |
| ERR-011 | Minor | Legacy script warning | ATAC scripts | `fgrep` obsolescence warning | Non-blocking |

---

## Key Fixes and Workarounds

### Linkage Fix in Tutorial Source

The tutorial `main.c` called `print()` before declaring it. Under GNU89, this created an implicit external declaration, which conflicted with the later static definition.

Fix:

- add a forward declaration for `print()` with static linkage.

### Terminal Library Fix

The linker error involving `vidattr` was resolved by installing `ncurses-devel` and exporting:

```bash
LIBS="-lncurses"
```

### Makefile Feature-Test Fix

The generated `cpp_ansi.c` feature test used implicit-int syntax and hardcoded `cc`.

Fix:

- use explicit `int main(void)`
- use `$(CC)` rather than hardcoded `cc`

### Runtime Layout Fix

The wrapper `atacCC` depends on `ataclib` to resolve the runtime helper directory.

Fix:

```bash
make LIB
make BIN
export PATH="$PWD/_install/bin:$PATH"
```

### GCC Header Discovery Fix

The wrapper did not automatically discover GCC’s internal include directory.

Fix:

```bash
GCC_INC=$(gcc -print-file-name=include)
```

Then pass `-I$GCC_INC` in tutorial `CFLAGS`.

### Parser Shim for `va_list`

ATAC’s parser does not understand modern GCC’s internal `__builtin_va_list` definitions.

Tutorial-specific workaround:

```bash
-D__builtin_va_list=char
```

This is acceptable for the tutorial `wordcount` validation because the program does not directly depend on variadic argument handling. It should not be treated as a general fix for arbitrary C programs.

### Comment Syntax Fix

The ATAC parser rejected a C++-style `//` comment in `main.c`.

Fix:

- convert the comment to standard C-style `/* ... */` syntax.

---

## Known Limitations

This repository validates the official tutorial workflow on Fedora Linux. It is not a full modernization of ATAC.

Known limitations:

1. The `__builtin_va_list` workaround is a parser shim, not a complete fix for all variadic C programs.
2. GCC internal include paths are injected manually.
3. Some ATAC scripts still use `fgrep`, which produces obsolescence warnings on modern Fedora.
4. Validation was performed on Fedora with GCC 15.
5. macOS and Windows users must account for case-insensitive filesystem collisions before building.
6. Larger C programs may expose additional parser or preprocessing assumptions.

---

## Final Status

The tutorial workflow is validated end-to-end on the Fedora test system.

ATAC now successfully performs the following steps:

1. build the tutorial target with `atacCC`
2. generate `.atac` metadata
3. run the instrumented binary
4. generate `wordcount.trace`
5. produce a coverage summary through `atac`

The debugging sequence shows that the porting issues came from separate layers: legacy C syntax, missing terminal-library linkage, wrapper discovery, incomplete runtime installation, modern GCC header layout, filesystem assumptions, and ATAC parser limitations. Each issue was isolated, fixed or worked around minimally, and verified before moving to the next stage.