#include <stdio.h>
#include <stdlib.h>

void main() {
    char students[100][100];
    printf("Enter students: \n");
    for (int i = 0; i <= 5; i++) {
        fgets(students[i], 100, stdin);
        printf("\n");
    }
    printf("\nStudents saved");
    for (int i = 0; i <= 5; i++) {
        printf("\nStudent name: %s", students[i]);
    }
}
