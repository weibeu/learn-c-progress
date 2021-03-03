#include <stdio.h>
#include <math.h>

#define AUTHOR "weibeu"
#define PI 3.14
#define GENDER 'M'

#define SQUARE(num) (num * num)
#define ROOT(num) (pow(num, 0.5))


void main() {
    printf("\nAuthor: %s\nValue of PI: %f\nGender: %c\n", AUTHOR, PI, GENDER);
    printf("\nSquare of 10: %d\n", SQUARE(10));
    printf("\nSquare root of 49: %f\n", ROOT(49));
}
