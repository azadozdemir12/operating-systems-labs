#include <unistd.h>
#include <fcntl.h>

int main(void) {
    int fd;
    char buffer[100];
    ssize_t n;

    // Dosyayı okuma modunda açıyoruz (varsa)
    fd = open("test.txt", O_RDONLY);

    if (fd < 0) {
        const char err[] = "Failed to open file.\n";
        write(1, err, sizeof(err) - 1);
        return 1;
    }

    // Dosyadan en fazla 100 byte oku
    n = read(fd, buffer, sizeof(buffer));

    // Okunan kısmı ekrana yaz
    write(1, buffer, n);

    // Dosyayı kapat
    close(fd);

    return 0;
}
