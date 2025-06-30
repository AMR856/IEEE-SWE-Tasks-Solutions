#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void advanced_pretty_printer(const char flag, 
const char *separator, const unsigned int n, ...);

int main(void){
    advanced_pretty_printer('i', ",", 5, 1, 2, 3, 4, 5);
    advanced_pretty_printer('s',"-", 2, "Amr", "Souriya");
    advanced_pretty_printer('s',"$", 4, "Homat", "eldiar", "3lekm", "salam");
}

void advanced_pretty_printer(const char flag, const char *separator, const unsigned int n, ...){
    va_list args;
    va_start(args, n);
    if (flag != 's' && flag != 'i') return;
    for (int i = 0; i < n - 1; i++) {
        if (flag == 's')
            printf("%s%s", va_arg(args, char *), separator);
        else
            printf("%d%s", va_arg(args, int), separator);
    }
    if (flag == 's')
        printf("%s", va_arg(args, char *));
    else
        printf("%d", va_arg(args, int));
    va_end(args);
    putchar('\n');
}
