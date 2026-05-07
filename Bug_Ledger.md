# 🐛 ATAC-Linux Porting Bug Ledger

**Project:** Adapting ATAC, the Automatic Test Analyzer for C, to modern x86_64 Linux  
**Status:** Tutorial workflow validated end-to-end  
**Platform:** Fedora Linux, GCC 15, x86_64  
**Methodology:** Structured error tracking, root-cause analysis, and staged verification

---

## 📌 Current Validation Status

The ATAC tutorial workflow now runs successfully on the Fedora test machine.

Verified stages:

- [x] Native tutorial build with `gcc`
- [x] Native `wordcount` execution
- [x] `atacCC` wrapper discovery through `PATH`
- [x] Runtime helper discovery through `ataclib`
- [x] Instrumented tutorial build with `atacCC`
- [x] Static metadata generation with `.atac` files
- [x] Instrumented executable generation
- [x] Runtime trace generation with `wordcount.trace`
- [x] Coverage summary generation with `atac -s`

---

## 📊 Error Summary Table

| ID          | Severity  | Category              | Location                    | Symptom / Error Message                                                                                    | Resolution Status                                             |
| :---------- | :-------- | :-------------------- | :-------------------------- | :--------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------ |
| **ERR-001** | 🔴 Block  | Linkage Conflict      | `tutorial/main.c`           | `static declaration of 'print' follows non-static declaration`                                             | ✅ Resolved with forward declaration                          |
| **ERR-002** | 🔴 Block  | Terminal Library      | Link stage                  | `unresolved reference to vidattr`                                                                          | ✅ Resolved with `ncurses-devel` and `LIBS=-lncurses`         |
| **ERR-003** | 🟡 Major  | Legacy C Syntax       | ATAC source                 | `implicit declaration of function`                                                                         | ✅ Handled with GNU89 compatibility flags                     |
| **ERR-004** | 🟡 Major  | Legacy C Syntax       | ATAC source / feature tests | `return type defaults to 'int'`                                                                            | ✅ Handled with flags and one Makefile compatibility patch    |
| **ERR-005** | 🟠 Medium | Build Logic           | `cpp_ansi.c` feature test   | `make LIB` / install feature-test failure                                                                  | ✅ Patched generated test to use `int main(void)` and `$(CC)` |
| **ERR-006** | 🔴 Block  | Wrapper Discovery     | Shell / Make                | `make: atacCC: No such file or directory`                                                                  | ✅ Resolved by adding `_install/bin` to `PATH`                |
| **ERR-007** | 🔴 Block  | Runtime Layout        | `atacCC` wrapper            | `ataclib: command not found`, `/atac_cpp: No such file or directory`, `/atac_i: No such file or directory` | ✅ Resolved by completing `make LIB` and `make BIN`           |
| **ERR-008** | 🔴 Block  | GCC Header Discovery  | `stdio.h` / GCC internals   | `stddef.h: No such file or directory`, `stdarg.h: No such file or directory`                               | ✅ Resolved by injecting GCC internal include path            |
| **ERR-009** | 🟠 Medium | Parser Compatibility  | `stdarg.h`                  | ATAC parse error at `__gnuc_va_list` / `__builtin_va_list`                                                 | ✅ Workaround applied with parser shim                        |
| **ERR-010** | 🟠 Medium | Parser Compatibility  | `tutorial/main.c`           | ATAC parse error on `//` comment                                                                           | ✅ Resolved by converting to C-style comment                  |
| **ERR-011** | 🔵 Minor  | Legacy Script Warning | `atacCC` internals          | `fgrep: warning: fgrep is obsolescent; using grep -F`                                                      | ⚠️ Non-blocking warning                                       |

---

## 🔍 Detailed Root Cause Analysis

### ERR-001: Linkage Conflict in `main.c`

**Artifact type:** Compilation error  
**Location:** `tutorial/main.c`  
**Status:** Resolved

#### Symptom

The tutorial program failed to compile because `print()` was called before a matching declaration was visible.

#### Root cause

The tutorial source uses old C style. The function `print()` is called before the compiler sees a prototype. Under GNU89 rules, this creates an implicit external declaration. Later, the function is defined as `static`, which conflicts with the earlier implicit external linkage.

#### Fix

Added a forward declaration for `print()` near the top of `main.c` so the compiler sees the correct linkage before the first call.

#### Verification

The native GCC build succeeded after the prototype was added.

---

### ERR-002: Terminal Library Dependency

**Artifact type:** Linker error  
**Location:** ATAC build stage  
**Status:** Resolved

#### Symptom

The build failed with unresolved terminal-display symbols such as `vidattr`.

#### Root cause

The original ATAC build logic expects older terminal libraries. On the Fedora test system, the required terminal-display symbols are provided through `ncurses`.

#### Fix

Installed the development package and linked against ncurses.

Required dependency:

`ncurses-devel`

Required linker flag:

`LIBS="-lncurses"`

#### Verification

The relevant ATAC binaries compiled after the dependency and linker flag were provided.

---

### ERR-003 and ERR-004: Legacy C Syntax

**Artifact type:** Compiler warning/error  
**Location:** ATAC source and generated feature tests  
**Status:** Resolved or suppressed where appropriate

#### Symptom

Modern GCC reported legacy C issues such as implicit function declarations and implicit `int` return types.

#### Root cause

ATAC is a legacy C codebase. It relies on K&R-style declarations and compiler behavior that was common in older Unix environments but is stricter in modern GCC configurations.

#### Fix

Used GNU89-compatible compilation flags to preserve the original source behavior while allowing the code to compile.

Key compatibility flags:

`-std=gnu89`  
`-Wno-implicit-function-declaration`  
`-Wno-implicit-int`

#### Verification

The core ATAC binaries compiled after applying the compatibility configuration.

---

### ERR-005: Makefile Feature-Test Failure

**Artifact type:** Build-system failure  
**Location:** generated `cpp_ansi.c` test in the top-level Makefile  
**Status:** Resolved

#### Symptom

The `make LIB` step failed during a generated feature test involving `cpp_ansi.c`.

#### Root cause

The Makefile generated a temporary C program using old implicit-int syntax. It also hardcoded the compiler as `cc`, which prevented command-line `CC` overrides from applying to this test.

#### Fix

Patched the generated feature test to use an explicit `int main(void)` and changed the compiler invocation to use `$(CC)`.

#### Verification

After this Makefile compatibility patch, the `LIB` target successfully installed runtime helper files into `_install/lib/atac`.

---

### ERR-006: `atacCC` Not Found

**Artifact type:** Environment path error  
**Location:** tutorial build through `make CC=atacCC`  
**Status:** Resolved

#### Symptom

The tutorial build failed because `make` could not find the `atacCC` command.

#### Root cause

The wrapper existed in the source/install tree, but it was not available in the shell `PATH`.

#### Fix

Added the installed ATAC binary directory to `PATH`.

Expected resolved location:

`/home/hpc/atac-linux/upstream/_install/bin/atacCC`

#### Verification

The shell resolved `atacCC` successfully, and the tutorial build progressed to the next ATAC-specific stage.

---

### ERR-007: Runtime Path Failure inside `atacCC`

**Artifact type:** Runtime layout error  
**Location:** `atacCC` wrapper  
**Status:** Resolved

#### Symptom

The wrapper failed with missing helper paths such as:

`ataclib: command not found`  
`/atac_cpp: No such file or directory`  
`/atac_i: No such file or directory`

#### Root cause

The `atacCC` wrapper calls `ataclib` to locate the ATAC runtime helper directory. Because `ataclib` had not been generated or installed correctly, the internal runtime library path was empty. This caused helper paths to collapse to root-level paths.

#### Fix

Completed the top-level installation targets that generate and install the runtime resolver and helper tools.

Required top-level targets:

`make LIB`  
`make BIN`

#### Verification

After the fix, `ataclib` returned the expected runtime directory:

`/home/hpc/atac-linux/upstream/_install/lib/atac`

The runtime directory contained the expected helper tools, including:

- `atac_i`
- `atac_cpp`
- `atacysis`
- `atac_to_bin`
- `minimize`
- `hili`
- `predefs`
- `loguse`
- `atac_rt.o`

---

### ERR-008: Missing GCC Internal Headers

**Artifact type:** Preprocessing failure  
**Location:** system headers during `atacCC` instrumentation  
**Status:** Resolved

#### Symptom

The ATAC build failed while processing standard headers:

`stddef.h: No such file or directory`  
`stdarg.h: No such file or directory`  
ATAC parse error at `size_t`

#### Root cause

Modern GCC stores compiler-provided headers such as `stddef.h` and `stdarg.h` in its internal include directory. The legacy `atacCC` wrapper did not automatically discover this directory.

#### Fix

Queried GCC for its internal include path and passed that path explicitly during the tutorial build.

On the Fedora test system, the path was:

`/usr/lib/gcc/x86_64-redhat-linux/15/include`

#### Verification

After injecting the GCC internal include path, the missing `stddef.h` and `stdarg.h` errors disappeared.

---

### ERR-009: Parser Failure on Modern `va_list` Definitions

**Artifact type:** Parser compatibility issue  
**Location:** GCC `stdarg.h`  
**Status:** Workaround applied

#### Symptom

After GCC internal headers were found, ATAC failed while parsing modern GCC definitions involving `__gnuc_va_list` and `__builtin_va_list`.

#### Root cause

ATAC’s parser is old and does not understand the internal variadic type definitions used by modern GCC headers.

#### Fix

For the tutorial validation, a narrow parser shim was applied:

`-D__builtin_va_list=char`

#### Verification

With this shim, `wc.c` compiled successfully through `atacCC`. Later, after resolving the comment syntax issue in `main.c`, the full tutorial program also compiled.

#### Limitation

This is a tutorial-specific compatibility workaround. It is acceptable for `wordcount` because the program does not directly rely on variadic argument handling. It should not be treated as a general solution for arbitrary C programs that use variadic APIs.

---

### ERR-010: C++-Style Comment Rejected in `main.c`

**Artifact type:** ATAC parser error  
**Location:** `tutorial/main.c`  
**Status:** Resolved

#### Symptom

After `wc.c` compiled successfully, `main.c` failed with an ATAC syntax error near line 72.

#### Root cause

The source contained a C++-style `//` comment. Modern GCC accepts this as an extension in many C modes, but the legacy ATAC parser rejected it.

#### Fix

Converted the line to a standard C-style comment.

#### Verification

After this syntax-only change, `main.c` compiled successfully through `atacCC`. The build produced:

- `main.atac`
- `wc.atac`
- `main.o`
- `wc.o`
- `wordcount`

---

### ERR-011: `fgrep` Obsolescence Warning

**Artifact type:** Non-blocking warning  
**Location:** ATAC shell scripts  
**Status:** Non-blocking

#### Symptom

The build printed repeated warnings:

`fgrep: warning: fgrep is obsolescent; using grep -F`

#### Root cause

ATAC’s scripts use the legacy `fgrep` command name. Modern systems prefer `grep -F`.

#### Fix

No fix was required for the tutorial validation because this warning does not affect compilation, instrumentation, trace generation, or coverage reporting.

#### Possible cleanup

Replace `fgrep` with `grep -F` in the relevant scripts.

---

## 🛠️ Validated Reproduction Workflow

The following sequence describes the successful workflow after applying the compatibility changes.

### 1. Prepare build environment

Install the required packages:

- Development Tools
- `ncurses-devel`
- `bison`
- `byacc`

Set legacy-compatible build flags:

- `CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int"`
- `LIBS="-lncurses"`

### 2. Configure and build ATAC

From the top-level source directory:

- configure with the local install prefix
- build the source
- complete the `LIB` target
- complete the `BIN` target
- add `_install/bin` to `PATH`

### 3. Validate wrapper discovery

Expected tools after installation repair:

- `atacCC`
- `ataclib`

Expected `ataclib` output:

`/home/hpc/atac-linux/upstream/_install/lib/atac`

### 4. Build the tutorial with ATAC instrumentation

From the tutorial directory:

- clean old object files, metadata files, executables, and traces
- query GCC’s internal include directory
- build with `CC=atacCC`
- include the GCC internal header path
- include the parser shim for `__builtin_va_list`

### 5. Verify generated artifacts

Expected files after successful instrumented build:

- `main.atac`
- `wc.atac`
- `main.o`
- `wc.o`
- `wordcount`

### 6. Run the instrumented executable

Validated inputs included:

- `./wordcount input1`
- `./wordcount -lwc input1`
- additional option combinations such as `-l`, `-w`, `-c`, `-lw`, `-lc`, and `-wc`
- stdin input through the no-filename execution path

### 7. Verify trace generation

Expected runtime trace:

- `wordcount.trace`

### 8. Generate coverage report

The final coverage summary was produced successfully through `atac`.

Observed total coverage from the tutorial run:

| Metric    | Result      |
| :-------- | :---------- |
| Blocks    | 85% (45/53) |
| Decisions | 74% (26/35) |
| C-Uses    | 63% (54/86) |
| P-Uses    | 74% (23/31) |

---

## 📈 Final Verification Checklist

- [x] Native GCC build succeeds
- [x] Native `wordcount` output matches expected tutorial output
- [x] ATAC wrapper `atacCC` is discoverable
- [x] Runtime resolver `ataclib` is discoverable
- [x] Runtime helper directory is populated
- [x] `wc.c` compiles through `atacCC`
- [x] `main.c` compiles through `atacCC`
- [x] Instrumented binary links successfully
- [x] `.atac` metadata files are generated
- [x] Instrumented executable produces correct functional output
- [x] `wordcount.trace` is generated
- [x] `atac -s` produces a coverage summary
- [x] Stdin path tested and understood
- [x] Non-blocking `fgrep` warnings documented

---

## ⚠️ Known Limitations

The current port validates the official tutorial workflow. It should not yet be considered a full modernization of ATAC.

Known limitations:

1. The `__builtin_va_list` workaround is a parser shim, not a complete fix for programs that depend on variadic behavior.
2. GCC internal include paths are injected manually. A stronger long-term solution would update `atacCC` to discover these paths automatically.
3. The shell scripts still use `fgrep`, which produces obsolescence warnings on modern Fedora.
4. The validation was performed on Fedora with GCC 15. Other distributions or compiler versions may expose additional compatibility issues.
5. The tutorial program is small. Larger C programs may reveal additional parser limitations.

---

## ✅ Final Status

The ATAC tutorial workflow is validated end-to-end on the Fedora test system.

The port now supports:

- compilation of the tutorial target through `atacCC`
- generation of `.atac` static metadata
- execution of the instrumented binary
- generation of `wordcount.trace`
- coverage reporting through `atac`

The debugging sequence shows that the failures were not caused by a single issue. They came from separate layers: legacy C syntax, environment path setup, incomplete runtime installation, Makefile feature-test assumptions, modern GCC header layout, and ATAC parser limitations. Each issue was isolated, fixed or worked around minimally, and verified before moving to the next stage.
