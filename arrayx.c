#include <stdio.h>


void main() {
    char name[] = "Deepak Raj";
    // printf("Value of 'name': %p", name);
    // printf("\nWhy name is pointer to D: %c\n", *name);

    printf("The address of first element ('D'): %p\n", name);
    printf("Since pointer is hex int, we can do math operations: %p\n", name + 1);
    printf("This is benifit: %c\n", *(name + 1));

    // Lets fuck deepak.
    *(name + 3) = 'f';
    printf("\nNew fucked name: %s\n", name);
}