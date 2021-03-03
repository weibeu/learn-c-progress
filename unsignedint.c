#include <stdio.h>


void main() {
    int x = 10;
    int y = sizeof(sizeof(x));
    printf("The number: %b", y);
}
