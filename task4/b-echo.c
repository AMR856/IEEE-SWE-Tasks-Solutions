#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char **argv){
  if (argc == 1){
    printf("Silence. Nothing came through.\n");
    exit(0);
  }
  bool received = false;
  for (int i = 1; i < argc; i++){
    if (!strcmp(argv[i], "revelation") && !received){
      printf("A truth revealed: You are not alone.\n");
      received = true;
      continue;
    } else if (!strcmp(argv[i], "revelation") && received);
    else printf("%s\n", argv[i]);
  }
}