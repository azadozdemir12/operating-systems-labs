#include <stdio.h>
#include <unistd.h>

int main(void) {
    int pid;

    pid = fork();   // Yeni bir child process oluşturur

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    }

    if (pid == 0) {
        // Child process
        printf("This is the child process.\n");
        printf("Child PID: %d\n", getpid());
    } else {
        // Parent process
        printf("This is the parent process.\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID returned by fork(): %d\n", pid);
    }

    return 0;
}
