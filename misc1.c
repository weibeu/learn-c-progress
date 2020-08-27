#include <stdio.h>
#include <stdlib.h>


void main() {
    int num;

    char *words[9];
    words[0] = "one";
    words[1] = "two";
    words[2] = "three";
    words[3] = "four";
    words[4] = "five";
    words[5] = "six";
    words[6] = "seven";
    words[7] = "eight";
    words[8] = "nine";

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num > 9) {
        printf("%d", num);
    } else {
        printf("%c", words[num - 1]);
    }
}