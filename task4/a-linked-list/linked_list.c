#include "linked_list.h"

linkedList* initialize (){
    linkedList *linkedlist = (linkedList *)malloc(sizeof(linkedList));
    linkedlist->length = 0;
    linkedlist->head = createNode(INT_MIN, NULL);
    return linkedlist;
}

Node* createNode(int x, Node* next){
  Node *node = (Node *)malloc(sizeof(Node));
  if (node == NULL){
    printf("Failed Allocation for the new node\n");
    return NULL;
  }
  node->next = next;
  node->data = x;
  return node;
}

void insertatEnd (linkedList *l, int x){
    if (l->head->data == INT_MIN){
        l->head->data = x;
        l->length++;
        return;
    }
    Node *current = l->head;
    while(current->next != NULL) current = current->next;
    Node *temp = createNode(x, NULL);
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

void freeList(linkedList *l){
    Node *current = l->head;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    free(l);
}
