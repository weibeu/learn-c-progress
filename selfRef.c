#include <stdio.h>
#include <string.h>


typedef struct Student {
    char name[20];
    struct Student *bestFriend;
} STUDENT;


void main() {
    STUDENT s1;
    strcpy(s1.name, "Deepak Raj");

    STUDENT s2;
    strcpy(s2.name, "Anurag Singh");

    s1.bestFriend = &s2;
    s2.bestFriend = &s1;

    printf("S1 NAME: %s", s1.name);
    printf("\nS2 NAME: %s", s2.name);

    printf("\nS1 BEST FRIEND NAME: %s", (*(s1.bestFriend)).name);
    printf("\nS1 BEST FRIEND OF BEST FRIEND NAME: %s", s1.bestFriend->bestFriend->name);

    printf("\n");
}
