#include <stdio.h>


int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main() {
    int terms, result;
    printf("Enter number of Fibonacci terms: ");
    scanf("%d", &terms);
    result = fibonacci(terms);
    printf("\nFibonacci: %d\n", result);
}
