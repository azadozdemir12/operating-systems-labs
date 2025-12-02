# Example 02 – Understanding the open() System Call

## Purpose
This example demonstrates how to open a file using the `open()` system
call, read its content, and print it to the screen.

## System Calls / Functions Used
- open()
- read()
- write()
- close()

## How It Works
1. The program opens a file named `test.txt` using `open()` in read-only mode.
2. If the file cannot be opened, an error message is printed.
3. If successful, the program reads up to 100 bytes from the file.
4. The data read is written to the screen using `write()`.
5. The file descriptor is closed using `close()`.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
