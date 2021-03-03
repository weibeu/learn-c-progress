#include <stdio.h>


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
};


int bubbleSort(int * array, int length) {
    for (int j = 0; j < length; j++) {
        for (int i = 0; i < length - j - 1; i++) {
            if (*(array + i) > *(array + i + 1)) {
                swap(array + i, array + i + 1);
            }
        }
    }
}


void printArray(int * array, int length) {
    for (int i = 0; i < length; i++)
        printf("%d ", *(array + i));
    printf("\n");
}


int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, n);
    printf("Sorted array: ");
    printArray(array, n);
    return 0;
}
