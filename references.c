#include <stdio.h>


struct Point {
    int x;
    int y;
};


struct Dimension {
        int x;
        int y;
        int z;
        int t;
};


struct Universe {
    char * name;
    int darkMatter;
    int darkEnergy;
    struct Dimension dimension;
};


void addOne(int * number) {
    printf("Pointer arg recieved: %p\n", number);
    printf("Pointer pointing to integer: %d\n", * number);
    (* number)++;
};


void movePoint(struct Point * point) {
    printf("Initial points: X=[%d] Y=[%d]\n", (* point).x, (* point).y);
    (* point).x++;
    (* point).y++;
    printf("Updated points: X=[%d] Y=[%d]\n", (* point).x, (* point).y);
};


void printAttr(char * attr, int value) {
    printf("- %s=[%d]\n", attr, value);
};


void printUniverseAttrs(struct Universe universe) {
    printf("%s [Universe]\n", universe.name);
    printAttr("Dark Energy", universe.darkEnergy);
    printAttr("Dark Matter", universe.darkMatter);
    printAttr("X Dimension", universe.dimension.x);
    printAttr("Y Dimension", universe.dimension.y);
    printAttr("Z Dimension", universe.dimension.z);
    printAttr("T Dimension", universe.dimension.t);
};


void setTime(struct Universe * universe) {
    universe->dimension.t = 42;
};


int main() {
    // int number = 1;
    // printf("Initial number: %d\n", number);
    // addOne(& number);
    // printf("Updated number: %d\n", number);
    // struct Point point;
    // point.x = 10;
    // point.y = 20;
    // movePoint(& point);
    // return 0;
    struct Universe myUniverse;
    myUniverse.name = "My Universe";
    myUniverse.darkEnergy = 100;
    myUniverse.darkMatter = 10;
    myUniverse.dimension.x = 10;
    myUniverse.dimension.y = 20;
    myUniverse.dimension.z = 17;
    myUniverse.dimension.t = 10;
    
    printUniverseAttrs(myUniverse);
    setTime(& myUniverse);
    printUniverseAttrs(myUniverse);
};
