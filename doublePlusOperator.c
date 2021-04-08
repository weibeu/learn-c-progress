#include <stdio.h>


void main() {
    int x = 1;
    int y = ++x;
    printf("Value of x: %d and y: %d", x, y);
    int z = x++;
    printf("\nValue of x: %d and z: %d", x, z);
    printf("\n");
}
