#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd;

    fd = open("employee.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);

    if (fd == -1)
    {
        printf("Error opening file.\n");
        return 1;
    }

    write(fd, "101 Rahul\n", strlen("101 Rahul\n"));
    write(fd, "102 Amit\n", strlen("102 Amit\n"));

    lseek(fd, 10, SEEK_SET);

    write(fd, "103 Mohit\n", strlen("103 Mohit\n"));

    lseek(fd, 0, SEEK_SET);

    char buffer[100];

    int bytes = read(fd, buffer, sizeof(buffer) - 1);

    buffer[bytes] = '\0';

    printf("Employee Records:\n\n%s", buffer);

    close(fd);

    return 0;
}
