#include <stdio.h>
#include <stdlib.h>


int stringLen(const char string[]) {
    int count;

    for (count = 0; string[count] != '\0'; count++);
    return count;
}


void main() {
    const char string[] = "My name is thecosmos.";
    printf("Length of the above string is: %d", stringLen(string));
}
