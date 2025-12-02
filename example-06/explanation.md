# Example 06 – Using the wait() System Call

## Purpose
This example shows how a parent process can wait for its child process
to finish using the `wait()` system call and how to obtain the child's
exit status.

## System Calls / Functions Used
- fork()
- wait()
- sleep()
- printf()

## How It Works
1. The program calls `fork()` to create a child process.
2. In the child process, a message is printed, the process sleeps for
   3 seconds, and then exits with status code 42.
3. In the parent process, `wait(&status)` is called to wait until the
   child process finishes.
4. After `wait()` returns, the parent prints a message and uses
   `WIFEXITED(status)` and `WEXITSTATUS(status)` to check and display
   the child's exit code.

## How to Compile and Run
```bash
$ gcc main.c -o app
$ ./app
