#include <stdio.h>
#include <stdarg.h>


void pretty_printer(const char *separator, const unsigned int n, ...);

int main(void){
    pretty_printer(",", 5, 1, 2, 3, 4, 5);
    pretty_printer("-", 2, 3, 4);
}

void pretty_printer(const char *separator, const unsigned int n, ...){
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n - 1; i++) {
        printf("%d%s", va_arg(args, int), separator);
    }
    printf("%d", va_arg(args, int));
    va_end(args);
    putchar('\n');
}
