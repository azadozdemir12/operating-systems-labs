#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

    printf("Before exec...\n");

    // Replace current process image with `ls -l`
    execl("/bin/ls", "ls", "-l", NULL);

    // If exec succeeds, this line will NEVER run
    printf("After exec (this will not print)\n");

    return 0;
}
