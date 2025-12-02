# Example 09 – Replacing Process Image Using exec()

## Purpose
This example demonstrates how the `execl()` system call replaces the
current process image with another executable.

## System Calls / Functions Used
- execl()
- printf()

## How It Works
1. The program prints `Before exec...`.
2. The `execl()` system call is executed.
3. The current process image is replaced with the `/bin/ls` program.
4. Since `execl()` never returns on success, the code after it is not executed.
5. The output of the `ls -l` command appears instead of the remaining code.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
