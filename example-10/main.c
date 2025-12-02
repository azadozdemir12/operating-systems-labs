#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *thread_function(void *arg) {
    printf("Inside thread\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t tid;

    // Create thread
    pthread_create(&tid, NULL, thread_function, NULL);

    // Wait for thread to finish
    pthread_join(tid, NULL);

    // Main process work
    for (int i = 20; i < 25; i++) {
        printf("%d\n", i);
        sleep(1);
    }

    return 0;
}
