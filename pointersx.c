#include <stdio.h>


void main() {
    int marks = 63;
    int *marksPointer = &marks;
    
    printf("Marks: %d", marks);
    printf("\nPointer to marks (marksPointer): %p", marksPointer);
    printf("\n");

    int marksUsingPointer = *marksPointer;
    printf("The value of marks variable retrived from its pointer: %d\n", marksUsingPointer);

    *marksPointer = 53;

    printf("Now lets see whats value of marks: %d\n", marks);
}
