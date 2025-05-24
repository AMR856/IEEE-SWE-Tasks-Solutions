#include <stdio.h>


int is_response_detected(int strength);
 
int main(void){
  if (is_response_detected(51)) printf("Here\n");
  else printf("Not here\n");
}

int is_response_detected(int strength){
  return strength > 50;
}