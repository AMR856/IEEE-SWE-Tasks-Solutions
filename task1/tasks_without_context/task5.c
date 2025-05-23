#include <stdio.h>
#include <stdbool.h>

bool _isalpha(char c);

int main(void){
  char c = '-';
  if (_isalpha(c)) printf("True\n");
  else printf("False\n");
}

bool _isalpha(char c){
  return 
  (c >= 'a' && c <= 'z') ||
  (c >= 'A' && c <= 'Z') ||
  (c >= '0' && c <= '9');
}