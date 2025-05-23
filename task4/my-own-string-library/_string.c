#include "_string.h"

size_t my_strlen(const char *s){
  size_t length = 0;
  const char *temp = s;
  while (*temp != '\0'){
    temp++;
    length++; 
  } 
  return length;
}

const char *my_strcpy(char *dest, const char *src){
  const char *temp = src;
  while (*src != '\0'){
    *dest = *src;
    src++;
    dest++;
  }
  return temp;
}

const char *my_strncpy(char *dest, const char *src, size_t n){
  const char *temp = src;
  while (*src != '\0'){
    if (n > 0){
      *dest = *src;
      src++;
      dest++;
      n--;
    } else break;
  }
  while (n--){
    *dest = '\0';
    dest++;
  }
  return temp;
}

int my_strcmp(const char *s1, const char *s2){
  const char *temps1 = s1;
  const char *temps2 = s2;
  int return_value = 0;
  while (*temps1 != '\0' && *temps2 != '\0'){
    if (*temps1 == *temps2){
      temps1++;
      temps2++;
      continue;
    } 
    else if (*temps1 > *temps2){
      return_value = 1;
      break;
    } else {
      return_value = -1;
      break;
    }
  }
  if (*temps1 != '\0' && *temps2 == '\0') return_value = 1;
  else if (*temps1 == '\0' && *temps2 != '\0') return_value = -1;
  return return_value;
}

// hello, world!\0
char *my_strcat(char *dest, const char *src){
  size_t old_size = my_strlen(dest);
  size_t new_size = old_size + my_strlen(src) + 1;
  dest = (char *)_reshape(dest, old_size, new_size);
  if (dest == NULL){
    printf("Failed Allocation\n");
    return NULL;
  }
  char *dest_start = dest;
  dest += old_size;
  while (*src != '\0')
    *(dest)++ = *src++;
  *(dest) = '\0';
  dest = dest_start;
  return dest;
}
