#include <stdio.h>


struct LinkedList {
    int value;
    struct LinkedList *node;
};


struct LinkedList createList(int value) {
    printf("\nCreating Linked List with value: %d", value);
    struct LinkedList list;
    list.value = value;
    return list;
}


void main() {
    struct LinkedList list1 = createList(10);
    struct LinkedList list2 = createList(20);

    list1.node = &list2;

    printf("\nAttached List 2 as node to List 1.");
    printf("\nList 1 value: %d\tAttached List to node value: %d", list1.value, list1.node->value);
    printf("\n");
}
