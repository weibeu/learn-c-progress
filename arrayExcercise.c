#include <stdio.h>


void main() {
    int grades[2][5];

    for (int i = 0; i < 5; i ++) {
        printf("\nEnter Maths mark of %d student: ", i + 1);
        scanf("%d", &grades[0][i]);
    }
    for (int i = 0; i < 5; i ++) {
        printf("\nEnter Physics mark of %d student: ", i + 1);
        scanf("%d", &grades[1][i]);
    }

    int totalMathsMarks = 0;
    int totalPhysicsMarks = 0;
    for (int i = 0; i < 5; i ++) {
        totalMathsMarks += grades[0][i];
        totalPhysicsMarks += grades[1][i];
    }

    printf("\nMaths average: %d", totalMathsMarks / 5);
    printf("\nPhysics average: %d", totalPhysicsMarks / 5);
}
