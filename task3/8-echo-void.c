#include <stdio.h>


void echo(int n) {
  if (n <= 0) return;
  printf("%d: Echo\n", n);
  echo(n - 1);
}

int main(void){
  echo(5);
  echo(-5);
}