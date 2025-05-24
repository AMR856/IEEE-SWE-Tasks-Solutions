#include <stdio.h>

void repeat_message(int n);

int main(void){
  repeat_message(5);
}

void repeat_message(int n){
  for (int i = 0; i < n; i++)
    printf("%d: Hello, world.\n", i + 1);
}