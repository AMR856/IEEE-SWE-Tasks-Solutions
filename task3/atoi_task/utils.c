#include "./_atoi.h"

int _strlen(char *s){
  char *t = s;
  int length = 0;
  while (*t){
    length++;
    t++;
  }
  return length;
}

int _putchar(char c, int fd){
  int status;
  status = write(fd, &c, 1);
  return status;
}

void write_error(int fd, char *s){
  if (write(fd, s, _strlen(s)) == -1){
    perror("Error writing to file\n");
    return;
  }
}

int _isalpha(char c){
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void truncate_file(char *filename){
  if (truncate(filename, 0) != 0) {
    write_error(STDERR_FILENO ,"Error truncating the file\n");
    exit(1);
  }
}