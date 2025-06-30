#ifndef _PRINT_F
#define _PRINT_F

#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>

int _putchar(int c);
size_t my_strlen(const char *s);
const char *my_strcpy(char *dest, const char *src);
void reverse(char *str);
char* citoa(int num, char* str, int base);
int _printf(const char *format, ...);

#endif