#include <stdio.h>


void printBig(int x) {
    if (x > 10) {
        printf("x is big\n");
    }
}


void main() {
    printBig(17);
    printBig(7);
}
