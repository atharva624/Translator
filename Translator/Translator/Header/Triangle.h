#pragma once
#include "Point.h"

class Triangle {
private:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(Point p1, Point p2, Point p3);
    ~Triangle();
    const Point& getP1() const;
    const Point& getP2() const;
    const Point& getP3() const;
};
