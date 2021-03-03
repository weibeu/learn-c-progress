#include <stdio.h>


typedef enum {
    monday, tuesday, wednesday, thursday, friday, saturday, sunday
} DAYS;


void main() {
    DAYS day = monday;
    
    if (day == monday) {
        printf("It's monday :<");
    } else {
        printf("It's not monday!");
    }
}
