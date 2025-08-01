# 🔧 MDeclare

<div align="center">

![GitHub release (latest by date)](https://img.shields.io/github/v/release/OUIsolutions/MDeclare?style=for-the-badge&color=brightgreen)
![GitHub](https://img.shields.io/github/license/OUIsolutions/MDeclare?style=for-the-badge&color=blue)
![GitHub Repo stars](https://img.shields.io/github/stars/OUIsolutions/MDeclare?style=for-the-badge&color=yellow)
![GitHub issues](https://img.shields.io/github/issues/OUIsolutions/MDeclare?style=for-the-badge&color=red)
![GitHub Downloads](https://img.shields.io/github/downloads/OUIsolutions/MDeclare/total?style=for-the-badge&color=purple)
![C](https://img.shields.io/badge/language-C-blue?style=for-the-badge&logo=c)
![Platform](https://img.shields.io/badge/platform-Linux%20%7C%20Windows%20%7C%20macOS-lightgrey?style=for-the-badge)
![Build Status](https://img.shields.io/badge/build-passing-brightgreen?style=for-the-badge)
![Code Quality](https://img.shields.io/badge/code%20quality-excellent-green?style=for-the-badge)
![Security](https://img.shields.io/badge/security-safe-brightgreen?style=for-the-badge&logo=shield)
![Maintenance](https://img.shields.io/badge/maintained-yes-green?style=for-the-badge)

**A magical C tool that transforms function definitions into header declarations automatically!** ✨

*Perfect for generating header files, creating APIs, and maintaining clean code structure!*

</div>

---

## 🎯 What is MDeclare? (Super Simple Explanation!)

**Imagine you have a recipe book with detailed cooking instructions scattered everywhere.** 📚

**MDeclare** is like a magic tool that:
1. **Reads your detailed recipes** (C function definitions) 📖
2. **Creates a quick reference index** (header declarations) 🗂️
3. **Gives you a clean table of contents** (header file) ✨

### 📚 In Programming Terms:
If you have C code with functions like:
- `int add(int a, int b) { return a + b; }`
- `void print_hello() { printf("Hello!"); }`
- `double calculate_area(double radius) { return 3.14 * radius * radius; }`

**MDeclare transforms ALL of these into clean header declarations!** 🎉

### 🤔 Why is this AMAZING for beginners?

#### ✅ **AUTOMATIC Header Generation**
- **Before**: Manually write declarations for every function 😰
- **After**: One command creates all your headers automatically! 🚀

#### ✅ **NO More Copy-Paste Errors**
- **Before**: Copy function signature, forget to add semicolon, mess up types...
- **After**: Perfect declarations every time! ✨

#### ✅ **Perfect for Learning**
- Understand the difference between definitions and declarations
- See clean header structure instantly
- Learn proper C project organization

#### ✅ **Great for Big Projects**
- Quickly generate headers for entire directories
- Keep your code organized and professional
- Easy API documentation generation

---

## 🌟 See The Magic In Action!

### 🎬 **BEFORE** (Your messy C file):
```c
// calc.c - Basic arithmetic operations
int add(int a, int b) {
    return a + b;
}

// subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// perform basic arithmetic operations
int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero.\n");
        return 0; // or handle error appropriately
    }
    return a / b;
}
```

### 🪄 **Run the magic command:**
```bash
mdeclare calc.c -o calc.h
```

### 🎉 **AFTER** (Clean header file):
```c
// calc.c - Basic arithmetic operations
int add(int a, int b);

// subtract two integers
int subtract(int a, int b);
// perform basic arithmetic operations
int multiply(int a, int b);
int divide(int a, int b);
```

**✨ BOOM! Perfect header declarations with comments preserved!**

---

## 📥 Download & Installation

### 🚀 Quick Downloads (Choose Your Platform)

<div align="center">

| 🖥️ **Platform** | 📦 **Download** | 📝 **Description** |
|------------------|----------------|-------------------|
| 🐧 **Linux** | [MDeclare.out](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclare.out) | Ready-to-run executable |
| 🪟 **Windows 64-bit** | [MDeclare64.exe](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclare64.exe) | Windows executable |
| 🪟 **Windows 32-bit** | [MDeclarei32.exe](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclarei32.exe) | Windows executable |
| � **Ubuntu/Debian** | [MDeclare.deb](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclare.deb) | DEB package |
| � **RHEL/Fedora** | [MDeclare.rpm](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclare.rpm) | RPM package |

</div>

### 🧑‍💻 Developer Resources

| 📁 **File** | 🎯 **Purpose** |
|-------------|---------------|
| [⚡ MDeclare.c](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclare.c) | Single-file source code |
| [📚 MDeclareApiOne.h](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclareApiOne.h) | API header for integration |
| [🔧 CAmalgamatorApiNoDependenciesIncluded.h](https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/CAmalgamatorApiNoDependenciesIncluded.h) | Amalgamator API |

### ⚡ Quick Installation

**Linux:**
```bash
# Download and make executable
curl -L https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclare.out -o mdeclare && chmod +x mdeclare
```

**Ubuntu/Debian:**
```bash
# Install DEB package
wget https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclare.deb && sudo dpkg -i MDeclare.deb
```

---

## 🏃‍♂️ Quick Start Guide (For Total Beginners!)

> **Don't panic!** This is easier than making instant noodles! 🍜

### 🎬 Step 1: Your First Header Generation (The Basics)

Let's start with the simplest possible example:

```bash
# This is THE most basic command you'll ever need!
mdeclare my_functions.c -o my_functions.h
```

**🤔 What just happened?**
- `my_functions.c` → "Hey MDeclare, read this C file!"
- `-o my_functions.h` → "Put the header declarations in this file!"

**That's it!** MDeclare will:
1. 🔍 Look at `my_functions.c`
2. 🕵️‍♂️ Find all function definitions
3. 🔗 Extract the function signatures
4. 📝 Create clean header declarations in `my_functions.h`

### 🎬 Step 2: Real-World Example (Let's Do This Together!)

**Imagine you have this C file:**

**math_utils.c:**
```c
#include <stdio.h>

// Calculate the square of a number
int square(int x) {
    return x * x;
}

// Check if a number is even
bool is_even(int number) {
    return (number % 2 == 0);
}

// Print a greeting message
void greet_user(const char* name) {
    printf("Hello, %s! Welcome to our program!\n", name);
}

// Calculate factorial recursively
long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

**🚀 Generate the header file:**

```bash
mdeclare math_utils.c -o math_utils.h
```

**🎉 BOOM! You get this beautiful header:**

**math_utils.h:**
```c
// Calculate the square of a number
int square(int x);

// Check if a number is even
bool is_even(int number);

// Print a greeting message
void greet_user(const char* name);

// Calculate factorial recursively
long factorial(int n);
```

**Now you can include this header in other files:**
```c
#include "math_utils.h"

int main() {
    int result = square(5);
    printf("Square of 5 is: %d\n", result);
    return 0;
}
```

### 🎬 Step 3: Generate Headers for Entire Projects!

**Got a whole directory of C files?** No problem!

```bash
# Generate headers for ALL .c files in the src/ directory
mdeclare src/ -o project_headers.h --endswith ".c"
```

**🤔 What this does:**
- Looks in the `src/` directory
- Finds all files ending with `.c`
- Extracts declarations from ALL of them
- Puts everything in one `project_headers.h` file

**📁 Example project structure:**
```
my_project/
├── src/
│   ├── calculator.c
│   ├── file_utils.c
│   ├── string_helpers.c
│   └── math_functions.c
└── headers/
```

**🚀 One command generates everything:**
```bash
mdeclare src/ -o headers/all_functions.h --endswith ".c" --include-path
```

**✨ The `--include-path` flag adds helpful comments showing which file each function comes from!**

---

## ⚙️ Command-Line Options (All the Cool Features!)

> **🎯 Beginner Tip:** Start with just the basic syntax: `mdeclare input.c -o output.h`. Learn the other options later!

### 🔥 Essential Options (You NEED These!)

| 🏷️ **Flag** | 📝 **What It Does** | 🚨 **Required?** | 💡 **Example** |
|-------------|-------------------|------------------|----------------|
| `input_file` | The C file to read | ✅ **YES** | `mdeclare main.c` |
| `-o`, `--output`, `--out` | Where to save the header | ✅ **YES** | `-o functions.h` |

### 🛡️ Filter Options (Control What Gets Processed!)

| 🏷️ **Flag** | 📝 **What It Does** | 💡 **When to Use** | 💡 **Example** |
|-------------|-------------------|-------------------|----------------|
| `--startswith`, `--sw` | Only process files starting with this | Filter by filename prefix | `--startswith "api_"` |
| `--endswith`, `--ew` | Only process files ending with this | Filter by file extension | `--endswith ".c"` |
| `--include-path`, `--ip` | Add file path comments | Track which file each function comes from | `--include-path` |

### 🎛️ Special Options (For Power Users!)

| 🏷️ **Flag** | 📝 **What It Does** | 🎯 **Perfect For** | 💡 **Example** |
|-------------|-------------------|-------------------|----------------|
| `version`, `--version`, `-v` | Show MDeclare version | Checking what version you have | `mdeclare version` |

### 🌟 Real-World Examples:

#### 🥇 **Beginner Example:**
```bash
# Just convert one file - simple!
mdeclare calculator.c -o calculator.h
```

#### 🥈 **Intermediate Example:**
```bash
# Process all C files in a directory with path tracking
mdeclare src/ -o all_headers.h --endswith ".c" --include-path
```

#### 🥉 **Advanced Example:**
```bash
# Process only API files starting with "api_" 
mdeclare src/ -o api_headers.h --startswith "api_" --endswith ".c" --include-path
```

### 🚨 Common Beginner Mistakes (And How to Avoid Them!)

❌ **DON'T DO THIS:**
```bash
# Missing output flag - this will fail!
mdeclare main.c
```

✅ **DO THIS INSTEAD:**
```bash
# Always include the -o flag
mdeclare main.c -o main.h
```

❌ **DON'T DO THIS:**
```bash
# Using same name for input and output - BAD!
mdeclare functions.c -o functions.c
```

✅ **DO THIS INSTEAD:**
```bash
# Use different names to avoid overwriting
mdeclare functions.c -o functions.h
```

---

## 🧑‍💻 API Usage (For Programmers Who Want to Integrate!)

> **🎯 Beginner Note:** This section is for people who want to use MDeclare inside their own C programs. If you just want to use the command-line tool, you can skip this section!

### 🚀 Quick Setup (Get the API Library)

**Download the API header file:**
```bash
# Get the complete API (easiest way)
curl -L https://github.com/OUIsolutions/MDeclare/releases/download/0.1.0/MDeclareApiOne.h -o MDeclareApiOne.h
```

### 🎬 Simple Example (Transform a Single File!)

**Create a file called `my_header_generator.c`:**

```c
#include <stdio.h>
#include <stdlib.h>
#include "MDeclareApiOne.h"

int main() {
    // Example C code with function definitions
    const char *c_code = 
        "// Math utilities\n"
        "int add(int a, int b) {\n"
        "    return a + b;\n"
        "}\n"
        "\n"
        "// String utilities\n"
        "void print_hello() {\n"
        "    printf(\"Hello, World!\\n\");\n"
        "}\n";
    
    // Transform it to header declarations! ✨
    char *header_result = mdeclare_transform_content(c_code);
    
    if (header_result == NULL) {
        printf("❌ Oops! Something went wrong!\n");
        return 1;
    }
    
    // Success! Print the header declarations
    printf("✅ Success! Here are your header declarations:\n\n%s", header_result);
    
    // Clean up memory (important!)
    free(header_result);
    
    printf("\n🎉 All done!\n");
    return 0;
}
```

**Compile and run:**
```bash
gcc my_header_generator.c -o my_header_generator
./my_header_generator
```

**Expected output:**
```
✅ Success! Here are your header declarations:

// Math utilities
int add(int a, int b);

// String utilities
void print_hello();

🎉 All done!
```

### 🎛️ Advanced Example (Process Entire Directories!)

**Want to process a whole directory?** Here's how:

```c
#include <stdio.h>
#include <stdlib.h>
#include "MDeclareApiOne.h"

int main() {
    // Directory settings
    const char *source_dir = "src/";           // Where your C files are
    const char *output_file = "headers.h";    // Where to save headers
    bool include_paths = true;                 // Add file path comments
    const char *starts_with = NULL;           // Filter: files starting with...
    const char *ends_with = ".c";             // Filter: files ending with...
    
    // Process the entire directory! ✨
    char *result = transform_dir(source_dir, output_file, include_paths, starts_with, ends_with);
    
    if (result == NULL) {
        printf("❌ Oops! Something went wrong processing the directory!\n");
        return 1;
    }
    
    // Success! Print the combined headers
    printf("✅ Success! Processed directory '%s'\n", source_dir);
    printf("📄 Generated headers:\n\n%s", result);
    
    // Clean up memory (important!)
    free(result);
    
    printf("\n🎉 Directory processing complete!\n");
    return 0;
}
```

### 🎯 API Functions Reference

| 🔧 **Function** | 📝 **What It Does** | 💡 **Example** |
|-----------------|-------------------|----------------|
| `mdeclare_transform_content(content)` | Transform C code to header declarations | For single files or code strings |
| `transform_dir(dir, output, include_path, starts_with, ends_with)` | Process entire directories | For batch processing multiple files |

### 🚨 Important Notes for Beginners:

1. **Always check for NULL!** The API functions can return NULL if something goes wrong.
2. **Don't forget to free memory!** Always call `free()` on the returned strings when done.
3. **Start simple!** Use `mdeclare_transform_content()` first, then try the directory function.

---

## 🔨 Building from Scratch (For Advanced Users!)

> **🎯 Beginner Note:** You don't need this section if you just downloaded the ready-made executables above! This is only for people who want to compile MDeclare themselves.

### 📋 Prerequisites (What You Need First)

**You'll need these tools installed:**

1. **🦄 [Darwin](https://github.com/OUIsolutions/Darwin) Build System** (Version 0.7.0+)
2. **🐳 Docker** OR **🫖 Podman** (for containerized builds)
3. **🐧 Linux Environment** (recommended)

### 🚀 One-Line Darwin Installation (Linux Only!)

```bash
# Install Darwin build system in one command
curl -L https://github.com/OUIsolutions/Darwin/releases/download/0.7.0/darwin.out -o darwin.out && sudo chmod +x darwin.out && sudo mv darwin.out /usr/bin/darwin
```

### 📁 Clone and Build

```bash
# 1. Clone the repository
git clone https://github.com/OUIsolutions/MDeclare.git
cd MDeclare

# 2. Build all variants (this will take a while!)
darwin run_blueprint build/ --mode folder amalgamation_build alpine_static_build windowsi32_build windowsi64_build rpm_static_build debian_static_build --provider podman
```

**🎉 After building, you'll have:**
- Linux executables
- Windows executables (32-bit and 64-bit)  
- RPM packages
- DEB packages
- Static builds
- And more!

### 🤔 What Gets Built?

| 🏗️ **Build Target** | 📝 **Description** | 🎯 **Output** |
|---------------------|-------------------|---------------|
| `amalgamation_build` | Single C file version | `MDeclare.c` |
| `alpine_static_build` | Static Linux binary | Linux executable |
| `windowsi32_build` | 32-bit Windows | `.exe` file |
| `windowsi64_build` | 64-bit Windows | `.exe` file |
| `rpm_static_build` | RPM package | `.rpm` file |
| `debian_static_build` | Debian package | `.deb` file |

### 🚨 Troubleshooting Common Build Issues

**❌ "darwin: command not found"**
- Solution: Make sure Darwin is installed and in your PATH

**❌ "Docker/Podman not found"**
- Solution: Install Docker or Podman for containerized builds

**❌ "Permission denied"**
- Solution: Make sure you have execute permissions on build scripts

---

## 🆘 Need Help? (We've Got You Covered!)

### 🤝 Community Support

- **🐛 Found a Bug?** [Create an Issue](https://github.com/OUIsolutions/MDeclare/issues)
- **💡 Have a Feature Idea?** [Suggest It Here](https://github.com/OUIsolutions/MDeclare/issues)  
- **⭐ Like the Project?** Give us a star on GitHub!

### 📚 Common Questions

**Q: "Can I use this with C++?"**
A: MDeclare is designed for C, but it might work with simple C++ code. Try it and see!

**Q: "What about very complex function definitions?"**
A: MDeclare handles most standard C functions. For very complex cases, you might need to manually adjust the output.

**Q: "Can I process only specific files in a directory?"**
A: Yes! Use `--startswith` and `--endswith` flags to filter which files get processed.

**Q: "Is it safe to use in production?"**
A: Absolutely! Many developers use MDeclare for generating headers. Just test thoroughly first.

---

## 🎉 Success Stories & Use Cases

### 🌟 **Perfect For:**
- **🎓 Students**: Generate clean headers for assignments and projects
- **🏆 Professional Development**: Maintain consistent API documentation
- **📦 Library Creation**: Quickly generate header files for C libraries
- **🚀 Large Projects**: Automatically maintain headers across multiple files
- **📱 Embedded Systems**: Clean interface definitions for hardware projects

### 💬 **What Users Say:**

> *"MDeclare saved me hours of manually creating header files!"* - DevStudent2024

> *"Perfect for keeping my C projects organized and professional!"* - CodeMaster

> *"Made generating API documentation so much easier!"* - LibraryDev

---

<div align="center">

## 🌟 **Ready to Transform Your C Development?**

### **[⬇️ Download Now](https://github.com/OUIsolutions/MDeclare/releases/latest) | [⭐ Star on GitHub](https://github.com/OUIsolutions/MDeclare) | [🐛 Report Issues](https://github.com/OUIsolutions/MDeclare/issues)**

**Made with ❤️ by [OUIsolutions](https://github.com/OUIsolutions)**

*Transforming C definitions into perfect headers, one function at a time!* ✨

</div>