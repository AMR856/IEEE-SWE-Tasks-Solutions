#ifndef _PRINT_F
#define _PRINT_F

#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_STRING_SIZE 255

int _putchar(int c);
size_t my_strlen(const char *s);
const char *my_strcpy(char *dest, const char *src);
void reverse(char *str);
char *_tolower(const char *str);
char *_toupper(const char *str);
bool _islower(char c);
bool _isupper(char c);
bool _isalpha(char c);
char* citoa(int num, char* str, int base, bool canbeNegative, bool cap);
int _printf(const char *format, ...);

#endif