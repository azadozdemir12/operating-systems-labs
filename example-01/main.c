#include <unistd.h>
#include <stddef.h>

int main(void) {
    const char intro[] = "Demo: write() and read() system calls.\n";
    write(1, intro, sizeof(intro) - 1);

    const char prompt[] = "Enter some text (max 100 chars): ";
    write(1, prompt, sizeof(prompt) - 1);

    char buffer[100];
    ssize_t nbytes = read(0, buffer, sizeof(buffer));

    if (nbytes < 0) {
        const char error_msg[] = "Error while reading input.\n";
        write(2, error_msg, sizeof(error_msg) - 1);
        return 1;
    }

    const char echo_msg[] = "You entered: ";
    write(1, echo_msg, sizeof(echo_msg) - 1);

    write(1, buffer, nbytes);

    return 0;
}
