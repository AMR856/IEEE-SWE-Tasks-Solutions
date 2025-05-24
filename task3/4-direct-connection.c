#include <stdio.h>

int main(void){
  int signal = 98;
  int *ptr = &signal;
  printf("Signal Address: %p\nSignal Value: %d\n", ptr, *ptr);
}