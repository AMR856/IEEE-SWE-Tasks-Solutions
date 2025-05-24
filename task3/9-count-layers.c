#include <stdio.h>

int sum_layers(int n);

int main(void){
  printf("Sum: %d\n", sum_layers(5));
}

int sum_layers(int n){
  if (n == 0) return 0;
  return n + sum_layers(n - 1);
}
// 5 + 4 + 3 + 2 + 1