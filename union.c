#include <stdio.h>


typedef union Type {
    int i;
    double f;
} TYPE;


void main() {
    TYPE type;
    type.i = 29;
    type.f = 1.2;
    printf("Integer: %d\nFloat: %f\n", type.i, type.f);
}
