#ifndef _ATOI_H
#define _ATOI_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int _atoi(char *s);
int _strlen(char *s);
int _putchar(char c, int fd);
int _isalpha(char c);
void write_error(int fd, char *s);
void truncate_file(char *filename);

#define NUM_FILE "converted_numbers.txt"
#define ERROR_FILE "errors.txt"


#endif