#include "./printf.h"

int _putchar(int c){
    int status;
    status = write(1, &c, 1);
    return status;
}
