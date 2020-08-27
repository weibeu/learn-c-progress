#include <stdio.h>


struct TestPoint {
    int x;
    int y;
};


typedef struct {
    int length;
    int breadth;
} Rectangle;


void main() {
    typedef struct {
        int x;
        int y;
    } Point;
    Point p;
    p.x = 10;
    p.y = 20;

    typedef struct TestPoint TestPoint;
    TestPoint pp;
    pp.x = 10;
    pp.y = 20;

    Rectangle rect;
    rect.length = 10;
    rect.breadth = 20;
}
