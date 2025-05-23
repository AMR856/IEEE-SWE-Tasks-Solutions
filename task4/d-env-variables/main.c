#include "./env_var.h"

struct env_var_linked_list *my_env;


int main(int argc, char *argv[], char *envp[]){
  struct env_var *try_get;
  char *temp_value = (char *)malloc(MAX_VALUE_LENGTH);
  strcpy(temp_value, "Amr Soriya");
  setup_list(envp);
  try_get = get_var("NAME");
  printf("%s\n", try_get->key);
  printf("%s\n", try_get->value);
  update_var("NAME", temp_value);
  try_get = get_var("NAME");
  printf("%s\n", try_get->key);
  printf("%s\n", try_get->value);
  remove_var("NAME"); 
  remove_var("SHELL"); 
  print_vars();
  clean_vars();
  free(temp_value);
}