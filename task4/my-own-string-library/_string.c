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
  if (dest == NULL || src == NULL)
    return NULL;
  const char *temp = dest;
  while (*src != '\0'){
    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';
  return temp;
}

const char *my_strncpy(char *dest, const char *src, size_t n){
  if (dest == NULL || src == NULL)
    return NULL;
  const char *temp = dest;
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
  if (s1 == NULL && s2 != NULL) return *s2;
  else if(s1 != NULL && s2 == NULL) return *s1;
  else if (s1 == NULL && s2 == NULL) return 0;
  else {
    while (*s1 && (*s1 == *s2)){
      s1++;
      s2++;
    }
    return *s1 - *s2;
  }
}

// hello, world!\0
char *my_strcat(char *dest, const char *src){
  if (dest == NULL || src == NULL)
    return NULL;
  size_t old_size = my_strlen(dest);
  char *dest_start = dest;
  dest += old_size;
  while (*src != '\0'){
    *dest = *src;
    src++;
    dest++;
  }
  *(dest) = '\0';
  return dest_start;
}

char *my_strncat(char *dest, const char *src, size_t n){
  if (dest == NULL || src == NULL)
    return NULL;
  char *temp = dest;
  size_t old_size = my_strlen(dest);
  dest += old_size;
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

char *my_strdup(const char *src){
  char *dest = (char *)malloc(my_strlen(src) + 1);
  if (dest == NULL){
    printf("Failed Allocation\n");
    return NULL;
  }
  my_strcpy(dest, src);
  return dest;
}

char *my_strchr(const char *s, int c){
  while (*s != '\0' && *s != c){
    s++;
  }
  if (*s == c) return (char *)s;
  return NULL;
}

void *my_memset(void *s, int c, size_t n){
  if (s == NULL) return NULL;
  for (int i = 0; i < n; i++){
    *(unsigned char *)(s) = (unsigned char)c;
    s++;
  }
}

void *my_memcpy(void *dest, const void *src, size_t n){
  if (dest == NULL || src == NULL) return NULL;
  for (int i = 0; i < n; i++){
    *(unsigned char *)(dest) = *(unsigned char *)src;
    dest++;
    src++;
  }
}

int my_memcmp(void *ptr1, void *ptr2, size_t size){
  if (ptr1 == NULL && ptr2 != NULL) return *(int *)ptr2;
  else if(ptr1 != NULL && ptr2 == NULL) return *(int *)ptr1;
  else if ((ptr1 == NULL && ptr2 == NULL) || size == 0) return 0;
  else {
    while ((*(unsigned char *)ptr1 == *(unsigned char *)ptr2 && size > 1) ){
      ptr1++;
      ptr2++;
      size--;
    }
    return *(unsigned char *)ptr1 - *(unsigned char *)ptr2;
  }
}

char *my_strstr(const char *haystack, const char *needle){
  if (haystack == NULL || !my_strcmp(haystack, "")) return NULL;
  else if (needle == NULL || !my_strcmp(needle, "")) return (char *)haystack;
  else {
    while (*haystack != '\0'){
      if (*haystack == *needle){
        const char *str_start = haystack;
        const char *needle_start = needle;
        while ((*haystack == *needle) && (*haystack != '\0' && *needle != '\0')){
          haystack++;
          needle++;
        }
        if (*needle == '\0') return (char *)str_start;
        else {
          needle = needle_start;
          continue;
        }
      }
      haystack++;
    }
    return NULL;
  }
}
