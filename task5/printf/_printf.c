#include "./printf.h"

int _printf(const char *format, ...){
    va_list args;
    int char_printed = 0;
    va_start(args, format);
    while (*format != '\0'){
        if (*format == '%'){
            format++;
            if (*format == 'c'){
                _putchar(va_arg(args, int));
                char_printed++;
            }
            else if (*format == 's' || *format == 'r'){
                char *string = va_arg(args, char *);
                char *reversedString = (char *)malloc(MAX_STRING_SIZE);
                if (*format == 'r'){
                    my_strcpy(reversedString, string);
                    reverse(reversedString);
                    string = reversedString;
                } 
                while (*string != '\0'){
                    _putchar(*string);
                    string++;
                    char_printed++;
                }
                free(reversedString);
            }
            else if (*format == '%'){
                _putchar('%');
                char_printed++;
            }
            else if (*format == 'd' || *format == 'i' || *format == 'b' ||
                *format == 'x' || *format == 'X'){
                int num = va_arg(args, int);
                char *str = (char *)malloc(MAX_STRING_SIZE);
                char *start = str;
                if (*format == 'd' || *format == 'i')
                    citoa(num, str, 10, true, false);
                else if (*format == 'u')
                    citoa(num, str, 10, false, false);
                else if (*format == 'o'){
                    citoa(num, str, 8, false, false);
                    _putchar('o');
                    char_printed++;
                }
                else if (*format == 'b'){
                    citoa(num, str, 2, false, false);
                    _putchar('0');
                    _putchar('b');
                    char_printed += 2;
                }
                else if (*format == 'x' || *format == 'X'){
                    if (*format == 'X')
                        citoa(num, str, 16, false, true);
                    else
                        citoa(num, str, 16, false, false);
                    _putchar('0');
                    _putchar('x');
                    char_printed += 2;
                }
                while (*str != '\0'){
                    _putchar(*str);
                    str++;
                    char_printed++;
                }
                free(start);
            } else if (*format == '_' || *format == '='){
                if (*(format + 1) == 's'){
                    char *string = va_arg(args, char *);
                    char *str;
                    char *start;
                    if (*format == '_') str = _tolower(string);
                    else str = _toupper(string);
                    start = str;
                    while (*str != '\0'){
                        _putchar(*str);
                        str++;
                        char_printed++;
                    }
                    free(start);
                } else {
                    char *string = va_arg(args, char *);
                    while (*string != '\0'){
                        _putchar(*string);
                        string++;
                        char_printed++;
                    }
                }
                format++;
            }
        } else _putchar(*format);
        format++;
    }
    va_end(args);
    _putchar('\n');
    return char_printed;
}
