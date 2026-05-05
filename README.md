# atac-linux

# Automatic Test Analyzer in C (ATAC) Modern Linux Porting Exercise

This repository documents my attempt to compile and run ATAC, an old C test-coverage tool, on a modern Linux machine.

The original ATAC project is maintained at:
https://invisible-island.net/atac/

This repository is not a new ATAC distribution. It is a porting and reproducibility exercise. The goal is to document the build process, failures, minimal changes, and validation steps.

## Source

- Source archive: atac-20131208.tgz
- Source URL: https://invisible-island.net/archives/atac/
- Tutorial: https://invisible-island.net/atac/atac-tutorial.pdf

## Goals

1. Build ATAC from source on Linux.
2. Identify build and portability issues.
3. Make minimal source or build-system changes.
4. Validate the result using the tutorial `wordcount` example.
5. Document all changes in a reproducible way.

## Structure

- `upstream/`: original ATAC source, imported unchanged in the first commit.
- `PORTING_NOTES.md`: chronological notes of commands, failures, changes, and validation.
- `patches/`: optional exported patches.
- `logs/`: selected configure/build/test logs.

# Installation Guide on Fedora Linux 42 (Workstation) Linux 6.19.14-100.fc42.x86_64

## Overview

This document provides instructions for compiling and installing ATAC from source on a modern 64-bit Linux environment. Due to the legacy nature of the codebase, specific compiler flags and dependency management are required to ensure compatibility with modern GCC standards.

---

## Prerequisites

### System Dependencies

Ensure your system has the following development tools and libraries installed:

```bash
# For Fedora/RHEL/CentOS
sudo dnf group install "Development Tools"
sudo dnf install ncurses-devel bison byacc glibc-devel.i686
```

---

## Build Instructions

### 1. Environment Configuration

To maintain compatibility with modern GCC (which treats legacy C patterns as errors), you must relax the compiler strictness and define the installation prefix.

```bash
export CFLAGS="-O2 -Wno-implicit-function-declaration -Wno-int-conversion -std=gnu89"
export LIBS="-lncurses"
```

### 2. Configure the Build

From the `upstream` directory, run the configuration script. We redirect logs to a dedicated folder for troubleshooting.

```bash
mkdir -p ../logs
./configure --prefix="$PWD/_install" 2>&1 | tee ../logs/configure.txt
```

### 3. Compile the Source

Execute the build using `make`.

```bash
make 2>&1 | tee ../logs/make.txt
```

---

## Installation

### Manual Deployment

Due to strictness in the legacy installation script's feature tests, a manual installation is recommended to ensure all binaries are correctly placed:

```bash
# Create target directories
mkdir -p _install/bin
mkdir -p _install/lib/atac

# Deploy binaries
cp atacysis/atacysis _install/bin/atac
cp tools/hili _install/bin/
cp atac_cpp/atac_cpp _install/bin/
cp Version _install/lib/atac/
```

---

## Post-Installation Setup

### Environment Variables

To use ATAC commands globally, add the bin directory to your `PATH`. Add the following line to your `~/.bashrc` file:

```bash
export PATH="$PATH:/path/to/your/atac-linux/upstream/_install/bin"
```

Apply the changes:

```bash
source ~/.bashrc
```

### Verification

Verify the installation by checking the command usage:

```bash
atac
```

---

## Troubleshooting

- **Missing ncurses**: If the linker fails with `undefined reference to vidattr`, ensure `LIBS="-lncurses"` is exported during configuration.
- **Type Size Warnings**: On 64-bit systems, `config.h` may report sizes in bits (e.g., `INT_TYPE_SIZE 32`). This is expected behavior for this legacy codebase and does not prevent functionality.
