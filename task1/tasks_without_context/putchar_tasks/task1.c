#include "_putchar.h"


int main(void){
  for (char c = 'a'; c <= 'z'; c++) if (c != 'q') _putchar(c);
  for (char c = 'Z'; c >= 'A'; c--)if (c != 'Q') _putchar(c);

}
