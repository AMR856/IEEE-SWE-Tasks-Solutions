#include <stdio.h>


#define MAX_STRING_LENGTH 255

void print_message(char *msg);

int main(void){
  char amr[MAX_STRING_LENGTH] = "Amr Soryia";
  print_message(amr);
}

void print_message(char *msg){
  printf("Message in string format\n");
  printf("%s\n", msg);
  printf("Message in int format\n");
  // * msg -> This can be NULL
  // * The main address of the string will not be NULL
  // * (msg) -> Won't work
  while (*msg){
    printf("%d\n", *msg);
    if (*msg != '\n' && *msg != ' '){
      putchar(*msg);
      putchar('\n');
    }
    msg++;
  }
}
