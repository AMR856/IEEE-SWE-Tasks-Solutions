#include "_putchar.h"


int main(void){
  for (int i =0; i <= 8; i++){
    for (int j = i + 1; j <=9; j++){
      _putchar(i + '0');
      _putchar(j + '0');
      if (i == 8 && j == 9);
      else {
        _putchar(',');
        _putchar(' ');
      }
    }
  }
  _putchar('\n');
}