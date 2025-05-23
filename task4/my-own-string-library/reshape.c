#include "_string.h"

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
