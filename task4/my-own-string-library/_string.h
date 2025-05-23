#ifndef _STRING_H
#define _STRING_H
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

size_t my_strlen(const char *s);
void *_reshape(void *ptr, size_t old_size, size_t new_size);
const char *my_strcpy(char *dest, const char *src);
const char *my_strncpy(char *dest, const char *src, size_t n);
int my_strcmp(const char *s1, const char *s2);
char *my_strcat(char *dest, const char *src);

#endif