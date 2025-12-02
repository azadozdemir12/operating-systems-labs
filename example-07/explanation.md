# Example 07 – Orphan Process

## Purpose
This example demonstrates how an orphan process is created when the
parent process terminates before the child process.

## System Calls / Functions Used
- fork()
- getppid()
- sleep()
- printf()

## How It Works
1. The program calls `fork()` to create a child process.
2. In the child process, it prints a message and then sleeps for 5 seconds.
3. In the parent process, it prints a message and exits immediately.
4. While the child is sleeping, the parent terminates.
5. After waking up, the child prints its parent PID using `getppid()`,
   which will now be the PID of the init (or equivalent) process, showing
   that it has become an orphan process.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
