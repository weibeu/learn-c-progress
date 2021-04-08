#include <stdio.h>


int factorial(int number) {
    if (number == 0) {
        return 1;
    }
    return number * factorial(number - 1);
}

void main() {
    int number, result;
    printf("Enter a number to get factorial: ");
    scanf("%d", &number);
    result = factorial(number);
    printf("Factorial is: %d\n", result);
}
