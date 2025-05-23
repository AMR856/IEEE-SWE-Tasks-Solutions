#include <stdio.h>
#include <stdlib.h>

void free_array(int **arr, int rows_num);

/*
  {
    {1, 2 ,3},
    {4, 5 ,6},
    {7, 8 ,9},
  }
*/

// m * n array
int main(void){
  int m = 3, n = 3;
  int **dynamic_two_array;
  dynamic_two_array = (int **)malloc(sizeof(int *) * m);
  for (int i = 0; i < m; i++) dynamic_two_array[i] = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++) dynamic_two_array[i][j] = i + j + 1;
  }
  free_array(dynamic_two_array, m);
}

void free_array(int **arr, int rows_num){
  for (int i = 0; i < rows_num; i++) free(arr[i]);
  free(arr);
}
