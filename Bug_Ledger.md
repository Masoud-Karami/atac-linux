# 🐛 ATAC-Linux Porting Bug Ledger

**Project:** Adapting ATAC (Automatic Test Analyzer for C) to Modern x86_64 Linux  
**Status:** Core Binaries Compiled - Tutorial Validation in Progress  
**Methodology:** Structured Error Tracking & Root Cause Analysis (RCA)

---

## 📊 Error Summary Table

| ID          | Severity | Category             | Location     | Symptom / Error Message                            | Resolution Status       |
| :---------- | :------- | :------------------- | :----------- | :------------------------------------------------- | :---------------------- |
| **ERR-001** | 🔴 Block | **Linkage Conflict** | `main.c:66`  | `static declaration of ‘print’ follows non-static` | ✅ Resolved (Prototype) |
| **ERR-002** | 🔴 Block | **Linkage/Lib**      | `Linker`     | `unresolved reference to vidattr`                  | ✅ Resolved (ncurses)   |
| **ERR-003** | 🟡 Major | **Legacy Syntax**    | `Various`    | `implicit declaration of function`                 | ✅ Suppressed (Flags)   |
| **ERR-004** | 🟡 Major | **Legacy Syntax**    | `Various`    | `return type defaults to ‘int’`                    | ✅ Suppressed (Flags)   |
| **ERR-005** | 🟠 Med   | **Build Logic**      | `cpp_ansi.c` | `make install` feature-test failure                | ✅ Patched (main)       |
| **ERR-006** | 🔵 Minor | **Env Path**         | `install-sh` | Binaries not found in standard PATH                | 🛠️ Workaround (Manual)  |

---

## 🔍 Detailed Root Cause Analysis (RCA)

### ERR-001: Linkage Conflict in `main.c`

- **Artifact Type:** Compilation Error
- **JSON Signature:**

```json
{
  "id": "ERR-001",
  "file": "main.c",
  "line": 66,
  "level": "ERROR",
  "category": "Linkage Conflict",
  "message": "static declaration follows non-static declaration"
}
```

- **Description:** The function `print()` is called at line 42. Because no prototype exists, the compiler assumes `extern int`. At line 66, it is defined as `static`.
- **Fix:** Added `static void print(...)` forward declaration to the header section of `main.c`.

---

### ERR-002: Terminal Library Dependency

- **Artifact Type:** Linker Error (LNK)
- **Description:** Modern Linux distributions have consolidated legacy terminal libraries into `ncurses`. The original configuration script fails to locate `vidattr`.
- **Fix:**
  1. Installed `ncurses-devel`.
  2. Injected `LIBS="-lncurses"` into the environment before running `configure`.

---

### ERR-003/004: Standard Compliance Regressions

- **Artifact Type:** Compiler Warning/Error
- **Description:** GCC 13+ treats implicit declarations as errors by default. The ATAC source relies heavily on K&R (Pre-ANSI) style C.
- **Fix:** Applied `-std=gnu89` and suppressed strict checks using `-Wno-implicit-function-declaration` and `-Wno-implicit-int`.

---

## 🛠️ Reproduction Workflow

To reproduce the current build state and generate the logs:

1. `export CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int"`
2. `export LIBS="-lncurses"`
3. `./configure --prefix=$PWD/_install`
4. `make 2>&1 | tee logs/make_output.txt`

---

## 📈 Verification Checklist

- [x] Static Analysis (Manual check of Linkage)
- [x] Binary Compilation (`atacysis`, `hili`, `atac_cpp`)
- [ ] Tutorial Metadata Generation (`.atac` files)
- [ ] Instrumented Execution Trace (`.trace` files)

<!--
The fisrt run for "make":
make
cd atac_i; make
make[1]: Entering directory '/home/hpc/atac-linux/upstream/atac_i'
gcc -O2 -Wno-implicit-function-declaration -std=gnu89 atac_i.o fg_module.o fg_stmt.o fg_expr.o dug.o paths.o mark.o allpaths.o alldu.o srcpos.o scan.o Pgram.o strtab.o upfix.o tree.o print_sym.o sym.o deparse.o type.o error.o list.o filestamp.o table.o reglist.o tnode.o const.o -o atac_i
make[1]: Leaving directory '/home/hpc/atac-linux/upstream/atac_i'
cd atacysis; make
make[1]: Entering directory '/home/hpc/atac-linux/upstream/atacysis'
gcc -O2 -Wno-implicit-function-declaration -std=gnu89 -o atacysis print.o static.o trace.o main.o summary.o bdisp.o rlist.o ddisp.o disp.o vector.o cdisp.o pdisp.o risk.o error.o gmatch.o tab_disp.o pat_match.o fdisp.o srcfile_name.o highest.o greedy.o ../atac_i/filestamp.o lib.o eval.o
gcc -O2 -Wno-implicit-function-declaration -std=gnu89 -o atactm atactm.o prev.o init.o tmerror.o lib.o mem.o pro.o dump.o columns.o pat_match.o gmatch.o pack.o
gcc -O2 -Wno-implicit-function-declaration -std=gnu89 -o atac_to_bin atac_to_bin.o lib.o static.o error.o gmatch.o pat_match.o
make[1]: Leaving directory '/home/hpc/atac-linux/upstream/atacysis'
cd atac_cpp; make
make[1]: Entering directory '/home/hpc/atac-linux/upstream/atac_cpp'
gcc -D_GNU_SOURCE -I. -I.. -I./.. -I. -DHAVE_CONFIG_H -DATAC_MODS -O2 -Wno-implicit-function-declaration -std=gnu89 -c ./cccp.c
gcc -D_GNU_SOURCE -I. -I.. -I./.. -I. -DHAVE_CONFIG_H -DATAC_MODS -O2 -Wno-implicit-function-declaration -std=gnu89 -c cexp.c
gcc -o atac_cpp cccp.o cexp.o version.o
make[1]: Leaving directory '/home/hpc/atac-linux/upstream/atac_cpp'
cd tools; make
make[1]: Entering directory '/home/hpc/atac-linux/upstream/tools'
gcc -O2 -Wno-implicit-function-declaration -std=gnu89 hili.o -lncurses -o hili
make[1]: Leaving directory '/home/hpc/atac-linux/upstream/tools'

2. second make command from tutoral dir
   hpc@fedora:~/atac-linux/upstream/tutorial$ make
   gcc -I. -O2 -Wno-implicit-function-declaration -std=gnu89 -c ./wc.c
   gcc -I. -O2 -Wno-implicit-function-declaration -std=gnu89 -c ./main.c
   ./main.c:66:8: error: static declaration of ‘print’ follows non-static declaration
   66 | static print(doline, doword, dochar, linect, wordct, charct, file)
   | ^~~~~
   ./main.c:42:25: note: previous implicit declaration of ‘print’ with type ‘int()’
   42 | print(doline, doword, dochar, linect, wordct, charct,
   | ^~~~~
   make: \*\*\* [makefile:20: main.o] Error 1
-->
