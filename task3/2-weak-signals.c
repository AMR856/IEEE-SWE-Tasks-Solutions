#include <stdio.h>


int is_strong_signal(int strength);
void check_signal(int strength);

int main(void){
  check_signal(52);
  check_signal(35);
}

int is_strong_signal(int strength){
  return strength > 50;
}

void check_signal(int strength){
  if (is_strong_signal(strength)) printf("Strong signal detected\n");
  else printf("No signal detected\n");
}