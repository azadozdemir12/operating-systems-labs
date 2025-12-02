# Example 10 – Creating Threads in Linux

## Purpose
This example demonstrates how to create a new thread using the
`pthread_create()` function and how `pthread_join()` makes the main
process wait for the thread to finish.

## System Calls / Functions Used
- pthread_create()
- pthread_join()
- sleep()
- printf()

## How It Works
1. `pthread_create()` creates a new thread.
2. The thread starts executing `thread_function()`.
3. Inside the thread, numbers 0–4 are printed with a 1-second delay.
4. `pthread_join()` makes the main process wait until the thread finishes.
5. After the thread finishes, the main process prints numbers 20–24.

## How to Compile and Run
```bash
$ gcc main.c -o app -lpthread
$ ./app
