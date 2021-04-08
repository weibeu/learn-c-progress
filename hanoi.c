#include <stdio.h>


void hanoi(int n, char source, char via, char destination) {
    if (n == 0) {
        return;
    }
    hanoi(n -1, source, destination, via);
    printf("\nMove the disk %d from twoer %c to tower %c", n, source, destination);
    hanoi(n -1, via, source, destination);
}

void main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("\n");
}
