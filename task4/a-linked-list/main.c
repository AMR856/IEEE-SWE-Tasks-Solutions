#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "linked_list.h"

int main() {
    // ChatGPT Main Example
    linkedList *myList = initialize();

    // Inserting elements into the list
    insertatEnd(myList, 10);
    insertatEnd(myList, 20);
    insertatEnd(myList, 30);
    insertatEnd(myList, 40);

    // Display the list
    printf("Linked List contents:\n");
    displayList(myList);

    freeList(myList);

    return 0;
}


