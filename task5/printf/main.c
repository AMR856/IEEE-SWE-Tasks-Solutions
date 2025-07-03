#include "printf.h"

int main(void){
    // _printf("   %s %c", "Amr Souryia", 's');
    int x = 42;
    int *ptr = &x;

    
    _printf("%d %i", 15, -20);
    _printf("%b", 5);
    _printf("%x %X", 15, 20);
    _printf("%r", "Amr");
    _printf("%_s", "Amr Souryia");
    _printf("%=s", "Amr Souryia");
    _printf("The address of x is: %p\n", ptr);
}
