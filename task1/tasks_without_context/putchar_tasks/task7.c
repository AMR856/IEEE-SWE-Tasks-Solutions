#include "_putchar.h"


int main(void){
  for (int i =0; i <= 7; i++){
    for (int j = i + 1; j <= 8; j++) {
      for (int k = j + 1; k <= 9; k++){
        _putchar(i + '0');
        _putchar(j + '0');
        _putchar(k + '0');
        if (i == 7 && j == 8 && k == 9);
        else {
          _putchar(',');
          _putchar(' ');
        }
      }
    }
  }
  _putchar('\n');
}