#include "_putchar.h"
#include <stdio.h>

int main(void){
  int n = 9, value, remainder;
  for (int i = 0; i <= n; i++){
    for (int j = 0; j <= n; j++){
      value = i * j;
      if (value >= 10) {
        remainder = value % 10;
        value /= 10;
        _putchar(value + '0');
        _putchar(remainder + '0');
      } else _putchar(value + '0');
      if (j != n) {
        _putchar(',');
        _putchar(' ');
      }
    }
    _putchar('\n');
  }
}
