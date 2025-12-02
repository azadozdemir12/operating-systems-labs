#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int pid;
    int status;

    pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    }

    if (pid == 0) {
        // Child process
        printf("Child: starting work...\n");
        sleep(3);
        printf("Child: finishing work.\n");
        return 42; // exit code
    } else {
        // Parent process
        printf("Parent: waiting for child...\n");
        wait(&status);
        printf("Parent: child finished.\n");

        if (WIFEXITED(status)) {
            printf("Parent: child exit code = %d\n", WEXITSTATUS(status));
        }

        return 0;
    }
}
