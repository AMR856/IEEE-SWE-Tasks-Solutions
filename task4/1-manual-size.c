#include <stdio.h>


int manual_sizeof();

int main(void){
  printf("Size of int: %d\n", manual_sizeof());
}

int manual_sizeof(){
  int arr[2] = {1, 2};
  return (char *)(arr + 1) - (char *)arr;
}
