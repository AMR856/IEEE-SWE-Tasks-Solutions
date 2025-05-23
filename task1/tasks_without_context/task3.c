#include <stdio.h>

int main(void){
  char c;
  scanf("%c", &c);
  if (c >= 'a' && c <= 'z') printf("Lower\n");
  else printf("Upper\n");
}