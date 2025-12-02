# Example 04 – Understanding the dup() System Call

## Purpose
This example shows how to duplicate an existing file descriptor using
the `dup()` system call and then use the duplicated descriptor to read
from the same file.

## System Calls / Functions Used
- open()
- dup()
- read()
- write()
- close()

## How It Works
1. The program opens `test.txt` in read-only mode and obtains a file descriptor `fd`.
2. It calls `dup(fd)` to create a duplicate file descriptor `newfd`.
3. Data is read from `newfd` into a buffer.
4. The data read is written to the screen using `write()`.
5. Both file descriptors are closed.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
