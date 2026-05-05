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
