#include <stdio.h>
#include <stdlib.h>

const int some_global_var = 1;


int main(void){
  int local_var = 2;
  int *dynamic_var = (int *)malloc(sizeof(int));
  *dynamic_var = 3;
  char *my_str = "Hello IEEE";
  printf("(%p : data segment) -> %d\n", &some_global_var, some_global_var);
  printf("(%p : stack segment) -> %d\n", &local_var, local_var);
  printf("(%p : heap segment) -> %d\n", dynamic_var, *dynamic_var);
  printf("(%p : data segment (read-only)) -> %s\n", &my_str, my_str);
}