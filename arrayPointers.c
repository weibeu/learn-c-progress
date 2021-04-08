#include <stdio.h>


void main() {
    int array[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("The address of first element of array: %p", array);
    printf("\nThe value of first element of the array: %d", *array);
    printf("\nThe value of second element of the array: %d", *(array + 1));
    printf("\nThe value of third element of the array: %d\n", *(array + 2));
}
