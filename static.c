#include <stdio.h>


int summer(int element) {
    static int sum = 0;
    sum += element;
    return sum;
}

void main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++) {
        printf("%d\n", summer(array[i]));
    }
}
