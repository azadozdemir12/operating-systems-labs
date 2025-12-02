#include <unistd.h>
#include <fcntl.h>

int main(void) {
    int fd, newfd;
    char buffer[100];
    ssize_t n;

    // test.txt dosyasını sadece okuma modunda aç
    fd = open("test.txt", O_RDONLY);

    if (fd < 0) {
        const char err[] = "Failed to open file.\n";
        write(1, err, sizeof(err) - 1);
        return 1;
    }

    // fd'yi kopyala (dup)
    newfd = dup(fd);

    if (newfd < 0) {
        const char err[] = "Failed to dup file descriptor.\n";
        write(1, err, sizeof(err) - 1);
        close(fd);
        return 1;
    }

    // Kopyalanan file descriptor'dan oku
    n = read(newfd, buffer, sizeof(buffer));

    // Okunan veriyi ekrana yaz
    write(1, buffer, n);

    close(fd);
    close(newfd);

    return 0;
}
