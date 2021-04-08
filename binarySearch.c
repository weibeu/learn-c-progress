#include <stdio.h>


int binarySearch(int array[], int leftIndex, int rightIndex, int toSearch) {
    int centerIndex = leftIndex + (rightIndex - 1) / 2;
    int centerElement = array[centerIndex];
    if (toSearch == centerElement) {
        return centerIndex + 1;
    }

    if (toSearch < centerElement) {
        return binarySearch(array, leftIndex, centerIndex - 1, toSearch);
    } else {
        return binarySearch(array, centerIndex + 1, rightIndex, toSearch);
    }

    return -1;

}


void main() {
    int array[10] = {-1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int toSearch = 8;
    
    int result = binarySearch(array, 0, 10 - 1, toSearch);

    if (result == -1) {
        printf("The element doesn't exists in the array.");
    } else {
        printf("The element is present at %d position in the array.", result);
    }
    printf("\n");
}
