#include <stdio.h>


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void swapVar(int *var1, int *var2) {
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}


void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapWithIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[swapWithIndex]) {
                swapWithIndex = j;
            }
        }
        if (array[swapWithIndex] < array[i]) {
            swapVar(&array[i], &array[swapWithIndex]);
        }
    }
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swapVar(&array[j], &array[j + 1]);
            }
        }
    }
}


void insertionSort(int array[], int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 &&  array[j] > key) {
            swapVar(&array[j + 1], &array[j]);
            j = j - 1;
        }
        // array[j + 1] = key;
    }
}


void main() {
    int array[] = {65, 34, 22, 98, 29, 101, -1, 87, 45, 77};
    int arraySize = 10;
    printf("Array before sorting:\n");
    printArray(array, arraySize);
    // selectionSort(array, arraySize);
    // bubbleSort(array, arraySize);
    insertionSort(array, arraySize);
    printf("Array after selection sort:\n");
    printArray(array, arraySize);
}
