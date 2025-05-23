#include <stdio.h>
#include <stdlib.h>

void *summon_allies(int *allies, int n);

int main(void){
  int n;
  printf("How many numbers you want to store? ");
  scanf("%d", &n);
  int *my_array = (int *)malloc(sizeof(int) * n);
  if (my_array == NULL){
    printf("Failed Allocation\n");
    exit(1);
  }
  summon_allies(my_array, n);
  printf("Now printing the values\n");
  for (int i = 0; i < n; i++) printf("%d\n", my_array[i]);
}

void *summon_allies(int *allies, int n){
  printf("Enter %d values, each one in a new line\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", allies + i);
    getchar();
  }
  printf("Finised reading the values\n");
}