#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_KEY_LENGTH 500
#define MAX_VALUE_LENGTH 2500
#define MAX_STRING_SIZE 3000

struct env_var{
  char *key;
  char *value;
  struct env_var *next;
};

struct env_var_linked_list {
  int env_var_count;
  struct env_var *head;
};

void setup_list(char **envp);
void add_new_var(char *key, char *value);
void update_var(char *key, char *value);
void remove_var(char *key);
struct env_var *get_var(char *key);
void print_vars();
void clean_vars();

#endif