#include <unistd.h>
#include <fcntl.h>

int main(void) {
    int fd;
    char buffer[20];
    ssize_t n;

    // test.txt dosyasını sadece okuma modunda aç
    fd = open("test.txt", O_RDONLY);

    if (fd < 0) {
        const char err[] = "Failed to open file.\n";
        write(1, err, sizeof(err) - 1);
        return 1;
    }

    // Dosya pointerını 10 byte ileri taşı
    lseek(fd, 10, SEEK_SET);

    // O pozisyondan itibaren 20 byte oku
    n = read(fd, buffer, sizeof(buffer));

    // Okunan kısmı ekrana yaz
    write(1, buffer, n);

    close(fd);
    return 0;
}
