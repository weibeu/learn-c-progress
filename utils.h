#include <stdio.h>


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}

void swapVar(int *var1, int *var2) {
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
