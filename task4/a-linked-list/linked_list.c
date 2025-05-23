#include "linked_list.h"

linkedList* initialize (){
    linkedList *linkedlist = (linkedList *)malloc(sizeof(linkedList));
    linkedlist->length = 0;
    linkedlist->head = (Node *)malloc(sizeof(Node));
    linkedlist->head->next = NULL;
    linkedlist->head->data = INT_MIN;
    return linkedlist;
}

Node* createNode(int x){
  Node *node = (Node *)malloc(sizeof(Node));
  if (node == NULL){
    printf("Failed Allocation for the new node\n");
    return NULL;
  }
  node->next = NULL;
  node->data = x;
}

void insertatEnd (linkedList *l, int x){
    if (l->head->data == INT_MIN){
        l->head->data = x;
        l->length++;
        return;
    }
    Node *temp = (Node *)malloc(sizeof(Node));
    Node *current = l->head;
    while(current->next != NULL) current = current->next;
    temp->data = x;
    temp->next = NULL;
    current->next = temp;
    l->length++;
}

void displayList (linkedList *l){
    Node *current = l->head;
    if (current->data == INT_MIN) return;
    while (current != NULL){
        if (current->next != NULL)
            printf("%d -> ", current->data);
        else
            printf("%d", current->data);
        current = current->next;
    }
    putchar('\n');
}
