# Instructor's repository

This repository contains C++ projects created by the instructor for the class.

Projects:
1. [cmake_base_project](cmake_base_project): template of a C++ project that can be built using CMake through the command line or through the CLion IDE. It can be copied/pasted as a new project. If you do so, don't forget to change the project name in the scripts (*.sh and CMakeLists.txt).
2. [cpp_intro1](cpp_intro1): project that illustrates the basic features of C++ (variables, types, functions, pointers, etc.).
3. [cpp_oo_intro](cpp_oo_intro): project that illustrates the object-oriented features of C++ (classes, inheritance, polymorphism, etc.).
4. [memory_mgnt](memory_mgnt): small program used to illustrate how variables are created in the memory Stack and Heap.

# How to run each project?

First of all, you need to clone this repository on your machine (by running `git clone [url_of_this_repository]` on the terminal). 
If you have cloned the repo and need to update it, you can open the terminal, go to the directory of the repo, and run `git pull`.

Each project can be run through the command line (terminal) or through the CLion IDE, once g++, cmake, and CLion are installed on your machine.

## Running a project through the command line

Each project contains two scripts:
* `build-run-unix.sh`: this one is for compiling/running the program on Linux or MacOS
* `build-run-win-msys2.sh`: this one is for compiling/running the program on Windows (through the "MSYS2 MinGW" terminal, not the Windows terminal)
