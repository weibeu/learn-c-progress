#include <stdio.h>
#include <string.h>


struct Parent {
    char name[20];
};

struct Child {
    char name[20];
    struct Parent parent;
};


#define MAX_CHILDREN 4


void main() {
    struct Parent raju;
    strcpy(raju.name, "Raju Kumar Yadav");

    struct Child golu, molu, polu, chodu;
    strcpy(golu.name, "Golu Kumar Yadav");
    strcpy(polu.name, "Polu Kumar Yadav");
    strcpy(molu.name, "Molu Kumar Yadav");
    strcpy(chodu.name, "Chodu Kumar Yadav");

    golu.parent = raju;
    polu.parent = raju;
    chodu.parent = raju;
    molu.parent = raju;

    printf("\nKIDS\n");

    struct Child children[MAX_CHILDREN] = {golu, molu, polu, chodu};

    for (int i = 0; i < MAX_CHILDREN; i++) {
        printf("\nCHILD: %s\t PARENT: %s", children[i].name, children[i].parent.name);
    }

    printf("\n");
}
