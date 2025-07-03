#ifndef _STRING_H
#define _STRING_H
#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(const char *s);
const char *my_strcpy(char *dest, const char *src);
const char *my_strncpy(char *dest, const char *src, size_t n);
int my_strcmp(const char *s1, const char *s2);
char *my_strcat(char *dest, const char *src);
char *my_strdup(const char *src);
char *my_strchr(const char *s, int c);
void *my_memset(void *s, int c, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
char *my_strstr(const char *haystack, const char *needle);
int my_memcmp(void *ptr1, void * ptr2, size_t size);
char *my_strncat(char *dest, const char *src, size_t n);

#endif