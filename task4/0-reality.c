#include <stdio.h>

void status (int n);

int main(void){
  void (*fptr)(int);
  fptr = &status;
  fptr(5);
  fptr(0);
  fptr(-5);
}

void status (int n){
  if (n > 0) printf("Positive\n");
  else if (n < 0) printf("Negative\n");
  else printf("Zero\n");
}