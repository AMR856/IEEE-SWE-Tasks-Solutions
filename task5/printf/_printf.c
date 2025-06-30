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
            else if (*format == 's'){
                char *string = va_arg(args, char *);
                while (*string != '\0'){
                    _putchar(*string);
                    string++;
                    char_printed++;
                }
            }
            else if (*format == '%'){
                _putchar('%');
                char_printed++;
            }
            else if (*format == 'd' || *format == 'i'){
                int num = va_arg(args, int);
                
            }
        } else _putchar(*format);
        format++;
    }
    va_end(args);
    _putchar('\n');
    return char_printed;
}
