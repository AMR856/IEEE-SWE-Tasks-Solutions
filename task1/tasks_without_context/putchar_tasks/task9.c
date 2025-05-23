#include "_putchar.h"

int main(void){
  int n = 12, value, remainder, temp;
  // 120
  if (n < 0 || n > 15) exit(1);
  for (int i = 0; i <= n; i++){
    for (int j = 0; j <= n; j++){
      value = i * j;
      if (value >= 99){
        remainder = value % 10;
        value /= 10;
        temp = value;
        value /= 10;
        _putchar(value + '0');
        _putchar(temp % 10 + '0');
        _putchar(remainder + '0');
      } else if (value >= 10) {
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