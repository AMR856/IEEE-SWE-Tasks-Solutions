#include "./env_var.h"

extern struct env_var_linked_list *my_env;

void add_new_var(char *key, char *value){
  struct env_var *new_var = (struct env_var *)malloc(sizeof(struct env_var));
  if (new_var == NULL){
    fprintf(stderr, "Failed to allocate memory\n");
    return;
  }

  new_var->key = (char *)malloc(MAX_KEY_LENGTH * sizeof(char));
  new_var->value = (char *)malloc(MAX_VALUE_LENGTH * sizeof(char));
  if (new_var->key == NULL|| new_var->value == NULL){
    fprintf(stderr, "Failed to allocate memory\n");
    free(new_var->key);
    free(new_var->value);
    free(new_var);
    return;
  }

  new_var->next = NULL;

  strcpy(new_var->key, key);
  strcpy(new_var->value, value);
  if (my_env->head == NULL)
    my_env->head = new_var;
  else {
    struct env_var *current = my_env->head;
    // 0 -> Equal
    // other -> Not equal
    while (current != NULL) {
      if (!strcmp(current->key, key)){
        strcpy(current->value, value);
        free(new_var->key);
        free(new_var->value);
        free(new_var);
        return;
      }
      if (current->next == NULL) break;
      current = current->next;
    }
    current->next = new_var;
  }
  my_env->env_var_count++;
}


void setup_list(char **envp){
  my_env = (struct env_var_linked_list *)malloc(sizeof(struct env_var_linked_list));
  if (my_env == NULL){
    fprintf(stderr, "Failed to allocate memory for the linked list\n");
    exit(1);
  }
  my_env->env_var_count = 0;
  my_env->head = NULL;
  char delimiter[] = "=";
  char *var_key = NULL, *var_value = NULL;
  char *buffer;
  while(*envp != NULL){
    buffer = (char *)malloc(MAX_STRING_SIZE);
    strcpy(buffer, *envp);
    var_key = strtok(buffer, delimiter);
    var_value = strtok(NULL, delimiter);
    if (var_key != NULL && var_value != NULL)
      add_new_var(var_key, var_value);
    free(buffer);
    envp++;
  }
}

void update_var(char *key, char *value){
  struct env_var *current = my_env->head;
  while (current->next == NULL){
    if (!strcmp(current->key, key)){
      strcpy(current->value, value);
      return;
    }
    current = current->next;
  }
  add_new_var(key, value);
}

struct env_var *get_var(char *key){
  struct env_var *current = my_env->head;
  while (current->next != NULL){
    if (!strcmp(current->key, key)){
      return current;
    }
    current = current->next;
  }
  return NULL;
}

void print_vars(){
  struct env_var *current = my_env->head;
  FILE *file = fopen("env_vars.txt", "w");
  if (file == NULL) {
      fprintf(stderr, "Error opening the file\n");
      return;
  }
  char* var_key, *var_value;
  while (current != NULL){
    var_key = current->key;
    var_value = current->value;
    fprintf(file, "%s=%s\n", var_key, var_value);
    current = current->next;
  }
  fclose(file);
}

void remove_var(char *key){
  struct env_var *current = my_env->head;
  struct env_var *temp;
  // If it was the first value
  if (!strcmp(current->key, key)){
    temp = current;
    my_env->head = current->next;
    free(temp->key);
    free(temp->value);
    free(temp);
    return;
  }
  // If it was in the middle or at the end
  while (current->next != NULL){
    if (!strcmp(current->next->key, key)){
      temp = current->next;
      current->next = current->next->next;
      free(temp->key);
      free(temp->value);
      free(temp);
      break;
    }
    current = current->next;
  }
}

void clean_vars(){
  struct env_var *current = my_env->head;
  struct env_var *temp;
  while (current->next != NULL){
    temp = current;
    current = current->next; // -- -> -- -> -- -> --
    free(temp->key);
    free(temp->value);
    free(temp);
  }
  free(current->key);
  free(current->value);
  free(current);
  free(my_env);
}