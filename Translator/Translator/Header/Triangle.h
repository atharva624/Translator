#pragma once
#include "Point.h"

class Triangle {
public:
    Point p1;
    Point p2;
    Point p3;

    Triangle(Point p1, Point p2, Point p3);
    void getTriangle();
    ~Triangle();
};
