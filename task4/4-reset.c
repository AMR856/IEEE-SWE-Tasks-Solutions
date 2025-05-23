#include <stdio.h>

void access_one();
void access_two();
int global_counter = 0;

int main(void){
  for (int i = 0; i < 5; i++) access_one();
  for (int i = 0; i < 5; i++) access_two();
  printf("%d\n", global_counter);
}

void access_one(){
  global_counter++;
  static int counter = 1;
  printf("%d Times Called - access_one\n", counter);
  counter++;
}

void access_two(){
  global_counter++;
  static int counter = 1;
  printf("%d Times Called - access_two\n", counter);
  counter++;
}
