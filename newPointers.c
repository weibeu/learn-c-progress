#include <stdio.h>


void main() {
    int variable = 12;
    printf("Value of the original variable: %d\n", variable);
    int *variablePointer = &variable;
    printf("Address of variable: %p", variablePointer);

    int sameVariable = *variablePointer;
    printf("\nSame variable retrived from its pointer: %d\n", sameVariable);
}
