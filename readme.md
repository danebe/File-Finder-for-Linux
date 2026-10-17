WORK IN PROGRESS
# CLI File Finder (C++)

A lightweight, high-performance command-line utility written in C++ to search for files across a Linux file system. Built as a hands-on project to master systems programming, the C++ Standard Template Library (STL), and modern C++ filesystem APIs.

---

## Features

* **Automatic Home Discovery:** Automatically detects and sets the search root to the user's Linux home directory (`$HOME`).
* **Recursive Traversal:** Deeply scans through folders and sub-folders using modern C++ filesystem iterators.
* **Flexible Matching:** Checks user input against both the **full filename** (e.g., `main.cpp`) and the **stem name** (e.g., `main` without its extension).
* **Robust Error Handling:** Safely wraps the filesystem scanner in a `try-catch` block with permission-skipping flags to bypass system-protected directories without crashing.

---

## Prerequisites

* A modern C++ compiler supporting **C++17 or C++20** (e.g., `g++` via GCC).
* A Linux environment (native Linux or WSL on Windows).

---

## Building and Running

1. **Clone or open the project directory** in your terminal.
2. **Compile the code** using `g++` with the C++20 flag:
   ```bash
   g++ -std=c++20 main.cpp -o finder