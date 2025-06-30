#include <stdio.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n,...);

int main(void){
    int sum = sum_them_all(5, 1, 2, 3, 4, 5);
    printf("%d\n", sum);
    sum = sum_them_all(2, 3, 4);
    printf("%d\n", sum);
}

int sum_them_all(const unsigned int n,...){
    va_list args;
    int sum = 0;
    va_start(args, n);
    for (int i = 0; i < n; i++) sum += va_arg(args, int);
    va_end(args);
    return sum;
}
// 0x04-variadic/1-pretty-printer.c