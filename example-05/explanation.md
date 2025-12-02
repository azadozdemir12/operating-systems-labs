# Example 05 – Understanding the fork() System Call

## Purpose
This example demonstrates how the `fork()` system call creates a new
child process and how the parent and child execute different code paths.

## System Calls / Functions Used
- fork()
- getpid()
- printf()

## How It Works
1. The program calls `fork()`.
2. If `fork()` returns `0`, the program is running inside the child process.
3. If `fork()` returns a positive number, the program is in the parent process,
   and the returned value is the child's PID.
4. Both parent and child print different messages to show they are separate processes.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
