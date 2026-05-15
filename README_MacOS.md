# macOS Setup, Installation & ATAC Tutorial Guide (Apple Silicon M1)

This comprehensive guide covers how to safely configure a case-sensitive developer volume, compile the legacy ATAC engine core, and execute the instrumented tutorial workflow on modern ARM64 macOS architectures.

---

## 1. Environment Preparation (Case-Sensitivity Workaround)

Because the legacy ATAC source contains direct filename case collisions (`VERSION`/`version` and `INSTALL`/`install-sh`), compiling directly in your standard Mac home directory (`~/`) will cause immediate file truncation and false Git deletion errors. 

### Create and Mount the Case-Sensitive Workspace
Open your native Mac Terminal or your VS Code integrated terminal and allocate a dynamic virtual disk container:

```bash
# 1. Create a 1GB case-sensitive virtual disk image in your Documents folder
hdiutil create -size 1g -fs "case-sensitive APFS" -volname "AtacWorkspace" ~/Documents/AtacWorkspace.dmg

# 2. Attach the disk image to your active system
hdiutil attach ~/Documents/AtacWorkspace.dmg

# 3. Move your active working directory inside the secure volume
cd /Volumes/AtacWorkspace
```

### Populate Code in the Workspace Volume
Move your existing local tracking folder or pull a clean tracking environment copy down from GitHub:
```bash
# Option A: Migrate an existing local folder structure into the volume
mv ~/atac-linux /Volumes/AtacWorkspace/

# Option B: Clone fresh from your remote GitHub project link
git clone <YOUR-GITHUB-REPO-URL> atac-linux
```

---

## 2. Prerequisites & Makefile Generation

macOS uses the Clang compiler under the hood (aliased as `gcc`). Older C structures require explicit parameters to downgrade legacy errors to warnings.

### Install Developer Dependencies
Ensure you have the core compiler utilities registered on your Mac:
```bash
xcode-select --install
```

### Generate and Clean the Build Environment
Navigate to your repository source core, generate your localized configuration templates, and wipe residual targets:

```bash
cd /Volumes/AtacWorkspace/atac-linux/upstream

# Parse parameters and generate standard Makefiles
./configure

# Remove stale compilation artifacts
make clean
```

---

## 3. Core Engine Compilation & Tool Deployment

Because the standalone `atac_cpp` preprocessor directory contains structural syntax bugs that conflict with modern Apple Silicon environments, compile the active analytical binaries and highlighting dependencies selectively:

```bash
# 1. Compile the active analytical binaries (atac, atacysis, atactm)
make CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type" LIBS="-lncurses"

# 2. Bypass the broken cpp parser block and jump into the helper tools directory
cd tools

# 3. Clean and build the highlighting utility (hili) natively
make clean
make CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type"

# 4. Return to the upstream root layout folder
cd /Volumes/AtacWorkspace/atac-linux/upstream

# 5. Build standard target tracking directories
mkdir -p _install/bin
mkdir -p _install/lib/atac

# 6. Manually copy the operational binaries into position
cp atacysis/atacysis _install/bin/atac
cp tools/hili _install/bin/
cp Version _install/lib/atac/

# 7. Bind your custom binary workspace to your active shell path string
export PATH="$PWD/_install/bin:$PATH"
```

---

## 4. Instrumented Tutorial Validation Workflow (`wordcount`)

Do not compile raw objects manually with `gcc`, as tracking symbols require automated source tables mapped by the sub-makefile environment. Let the integrated test pipeline generate the code block tracking hooks automatically:

### Compile the Instrumented Target
```bash
# Navigate to the tutorial sample test suite
cd /Volumes/AtacWorkspace/atac-linux/upstream/tutorial

# Clear existing uninstrumented verification layers
make clean 2>/dev/null || rm -f *.o wordcount wordcount.trace

# Force-compile the instrumented configuration version of wordcount
make wordcount CFLAGS="-O2 -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-error=implicit-function-declaration"
```

### Execute Coverage Trace Capture Passes
Run your functional test scenarios against the baseline tracking target program to populate active branch logs:
```bash
# Execute Test Case 1 (Standard execution mapping pass)
./wordcount input1

# Execute Test Case 2 (Multi-flag processing pass)
./wordcount -lwc input1

# Confirm the file runtime engine captured execution trends
ls -la wordcount.trace
```

### Analyze Coverage Reports & Highlight Missing Paths
Leverage your compiled profile suite to evaluate your overall code block coverage percentages and visually inspect code coverage gaps directly inside your terminal window:

```bash
# Verify your manual installation directory continues to be mapped in your path string
export PATH="/Volumes/AtacWorkspace/atac-linux/upstream/_install/bin:$PATH"

# Generate a high-level testing summary profile report
atac -s -f wordcount.trace main.c wc.c

# Use the 'hili' engine to highlight unexecuted code lines (e.g. error checks, missing options)
atac -mb wordcount.trace main.c wc.c
```

---

## Technical Workspace Re-entry Note

The virtual disk structure (`AtacWorkspace`) will unmount when your Mac restarts or sleeps deeply. If you open your project repository folder later and find an empty directory layout, run this sequence to restore your environmental parameters:

```bash
# Attach the workspace image container and mount paths
hdiutil attach ~/Documents/AtacWorkspace.dmg

# Change directory back into your working tree
cd /Volumes/AtacWorkspace/atac-linux/upstream

# Re-register your binary path strings to resume profiling assignments
export PATH="$PWD/_install/bin:$PATH"
```
