#include <stdio.h>
#include <stdlib.h>

typedef struct Being {
  char *name;
  int age;
  float energy_level;
} Being;

void print_being(Being *b);
Being *create_being(void);

int main(void){
  return EXIT_SUCCESS;
}

Being *create_being(char *name, int age, float energy_level){
  Being *being = (Being *)malloc(sizeof(Being));
  being->name = name;
  being->age = age;
  being->energy_level = energy_level;
  return being;
}

void print_being(Being *b){
  printf("Name: {%s}, Age: {%d}, Energy: {%s}\n",
  b->name, b->age, b->energy_level);
}

void free_being(Being *being){
  free(name);
  free(being);
}