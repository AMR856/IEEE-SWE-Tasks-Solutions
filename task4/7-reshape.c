#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_reshape(void *ptr, size_t old_size, size_t new_size);

int main(void){
    // ChatGPT Main Function Example
   int *arr = malloc(5 * sizeof(int));
    if (!arr) {
        perror("malloc failed");
        return 1;
    }

    // Fill initial array
    for (int i = 0; i < 5; i++) arr[i] = i + 1;

    printf("Original array:\n");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");

    // Expand to 8 integers using _reshape
    int *bigger = _reshape(arr, 5 * sizeof(int), 8 * sizeof(int));
    if (!bigger) {
        perror("_reshape failed");
        free(arr);  // Original still valid if _reshape fails
        return 1;
    }

    // Add new data
    for (int i = 5; i < 8; i++) bigger[i] = (i + 1) * 10;

    printf("After expanding:\n");
    for (int i = 0; i < 8; i++) printf("%d ", bigger[i]);
    printf("\n");

    // Shrink to 3 elements
    int *smaller = _reshape(bigger, 8 * sizeof(int), 3 * sizeof(int));
    if (!smaller) {
        perror("_reshape failed");
        free(bigger);
        return 1;
    }

    printf("After shrinking:\n");
    for (int i = 0; i < 3; i++) printf("%d ", smaller[i]);
    printf("\n");

    // Free memory
    free(smaller);

    return 0;
}

void *_reshape(void *ptr, size_t old_size, size_t new_size){
  void *my_allocated_data = NULL;
  if (ptr == NULL) {
    my_allocated_data = (void *)malloc(new_size);
    if (!my_allocated_data) {
      printf("Falied Allocation\n");
      return NULL;
    }
  } else if (new_size == 0) free(ptr);
    else {
    if (new_size == old_size) return ptr;
    my_allocated_data = (void *)malloc(new_size);
    if (my_allocated_data == NULL){
      printf("Falied Allocation\n");
      return NULL;
    }
    char *src = (char *)ptr;
    char *dest = (char *)my_allocated_data;
    int size_to_copy = (new_size > old_size) ? old_size : new_size;
      while (size_to_copy--){
        *dest = *src;
        src++;
        dest++;
      }
    }
  return my_allocated_data;
}
