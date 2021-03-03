#include <stdio.h>


void main() {
	char name[] = "Deepak Raj";
	char * namePointer = name;

	printf("Name: %s\n", name);
	printf("Name Pointer: %p\n", namePointer);
	printf("First value of pointer: %c\n", *namePointer);
	printf("Second value of pointer: %c\n", *(namePointer + 1));
}
	
