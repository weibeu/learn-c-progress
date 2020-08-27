#include <stdio.h>


void learnPhysics(int * marksPointer) {
    int SCORE = 10;
    * marksPointer += SCORE;
}


void main() {
    int * marks = (int []){1, 2, 3, 4, 5};
    printf("ENGLISH: %d, MATHS %d\n", *(marks + 1), *(marks + 2));
    printf("PHYSICS: %d, CHEMISTRY: %d\n", marks[0], marks[3]);
    
    int * physicsMarksPointer = &marks[0];
    learnPhysics(physicsMarksPointer);

    printf("PHYSICS MARKS AFTER LEARNING: %d\n", marks[0]);
}
