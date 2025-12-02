#include <stdio.h>
#include <unistd.h>

int main(void) {
    int pid;

    pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    }

    if (pid == 0) {
        // Child process
        printf("Child: I am the child process.\n");
        printf("Child: sleeping so that parent can exit...\n");
        sleep(5);
        printf("Child: my parent PID is now %d\n", getppid());
    } else {
        // Parent process
        printf("Parent: I am the parent process.\n");
        printf("Parent: exiting now.\n");
        return 0;  // parent hemen biter → child orphan olur
    }

    return 0;
}
