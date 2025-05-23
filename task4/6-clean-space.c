#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *clear_allocation(size_t count, size_t size);

int main(void){
  int *my_array = (int *)clear_allocation(5, 4);
  for (int i = 0; i < 5; i++) my_array[i] = i + 1;
  for (int i = 0; i < 5; i++) printf("%d\n", my_array[i]);
}


void *clear_allocation(size_t count, size_t size){
  void *my_array = (void *)malloc(size * count);
  if (my_array == NULL){
    printf("Failed Allocation\n");
    exit(1);
  }
  for (int i = 0; i < count; i++) memset(my_array + i, 0, size);
  return my_array;
}

