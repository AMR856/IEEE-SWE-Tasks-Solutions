#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main(void){
  int values[] = {-1, 5, 0, -20, 3};
  for (int i = 0; i < sizeof(values) / sizeof(int); i++)
    printf("%d\n", SQUARE(values[i]));
}
