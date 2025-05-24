#include <stdio.h>

char *get_reply();

int main(void){
  char *reply = get_reply();
  printf("%s\n", reply);
}

char *get_reply(){
  return "Amr Soryia";
}