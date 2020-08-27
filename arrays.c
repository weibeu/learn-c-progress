#include <stdio.h>


int main() {
    int size;
    printf("Enter size of the matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    for (int r = 0; r < size; r ++) {
        for (int c = 0; c < size; c ++) {
            printf("\nEnter the (%d, %d)th element: ", r + 1, c + 1);
            scanf("%d", &matrix[r][c]);
        }
    }

    printf("Your matrix ...\n");

    for (int r = 0; r < size; r ++) {
        for (int c = 0; c < size; c ++) {
            printf("%d", matrix[r][c]);
            if (c == size - 1) {
                printf("\n");
            } else {
                printf(", ");
            }
        }
    }
}
