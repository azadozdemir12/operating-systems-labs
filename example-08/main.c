#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
    int pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    }

    if (pid == 0) {
        // Child process
        printf("Child: I am exiting now.\n");
        exit(0);                 // child ölür → parent beklemezse zombie olur
    } 
    else {
        // Parent process
        printf("Parent: Child has exited but I am sleeping...\n");
        sleep(10);               // parent sleep → child zombie olarak kalır
        printf("Parent: waking up now.\n");
    }

    return 0;
}
