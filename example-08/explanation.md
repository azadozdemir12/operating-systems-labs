# Example 08 – Zombie Process

## Purpose
This example demonstrates how a zombie process is created when a child
process exits but the parent does not call `wait()` to collect its
termination status.

## System Calls / Functions Used
- fork()
- exit()
- sleep()
- printf()

## How It Works
1. The child process exits immediately using `exit(0)`.
2. The parent process does **not** call `wait()`.
3. Instead, the parent sleeps for 10 seconds.
4. During this time, the child process becomes a zombie because it has
   terminated but its exit status has not been collected.
5. The process will appear in the process table as `<defunct>`.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
