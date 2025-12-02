# Example 03 – Understanding the lseek() System Call

## Purpose
This example shows how to move the file offset using the `lseek()` system
call before reading data.

## System Calls / Functions Used
- open()
- lseek()
- read()
- write()
- close()

## How It Works
1. The program opens `test.txt` in read-only mode.
2. `lseek(fd, 10, SEEK_SET)` moves the file pointer to byte position 10.
3. The program reads 20 bytes starting from that position.
4. The content read is printed to the screen.
5. The file is closed.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
