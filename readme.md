WORK IN PROGRESS
# CLI File Finder (C++)

A  command-line utility written in C++ to search for files across a Linux file system. 

---

## Features

* **Automatic Home Discovery:** Automatically detects and sets the search root to the user's Linux home directory (`$HOME`).
* **Recursive Traversal:** Recursively scans through folders and sub-folders.
* **Matching:** Checks user input against both the **full filename** (e.g., `main.cpp`) and the **stem name** (e.g., `main` without its extension).
* **Error Handling:**The filesystem scanner sits in a `try-catch` block with permission skipping flags to bypass system protected directories without crashing.

---

## Prerequisites

* C++ compiler supporting **C++17 or newer**.
* A Linux environment (native Linux or WSL on Windows).

---

## Building and Running

1. **Clone or open the project directory** in your terminal.
2. **Compile the code** using `g++` with the C++17 flag or whichever is newer:
   ```bash
   g++ -std=c++26 main.cpp -o finder