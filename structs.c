#include <stdio.h>


struct Person {
    char * name;
    int age;
};


void birthday(struct Person * p) {
    (*p).age++;
};


void main() {
    struct Person arkham;
    arkham.name = "Arkham Knight";
    arkham.age = 20;
    printf("Age of %s before birthday: %d\n", arkham.name, arkham.age);
    birthday(&arkham);
    printf("Age of %s after birthday: %d\n", arkham.name, arkham.age);
};
