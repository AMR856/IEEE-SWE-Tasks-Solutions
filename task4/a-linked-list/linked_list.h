#ifndef _LINKED_LIST
#define _LINKED_LIST

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node Node;

typedef struct {
    int length;
    Node *head;
} linkedList;


linkedList* initialize ();
Node* createNode(int x);
void insertatEnd (linkedList *l, int x);
void displayList (linkedList *l);


#endif