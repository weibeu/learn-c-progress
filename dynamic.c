#include <stdlib.h>
#include <stdio.h>


typedef struct {
    char *name;
    int age;
} person;


void main() {
    person *deepak = malloc(sizeof(person));
    deepak->name = "Deepak Raj";
    deepak->age = 21;

    printf("NAME=[%s] AGE=[%d]\n", deepak->name, deepak->age);
    free(deepak);
    printf("NAME=[%s] AGE=[%d]\n", deepak->name, deepak->age);
}
