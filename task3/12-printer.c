#include <unistd.h>

int _strlen(char *s){
    char *t = s;
    int length = 0;
    while (*t){
        length++;
        t++;
    }
    return length;
}

int printer(int fd, char *s){
    int len_printed = write(fd, s, _strlen(s));
    if (len_printed == -1) {
        perror("Error writing to file\n");
        return -1;
    }
    return len_printed;
}