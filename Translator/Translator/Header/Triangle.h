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
#pragma once
#include "Point.h"

// Class representing a triangle defined by three points
class Triangle {
private:
    Point p1; // First vertex
    Point p2; // Second vertex
    Point p3; // Third vertex

public:
    Triangle(Point p1, Point p2, Point p3); // Constructor to initialize vertices
    ~Triangle(); // Destructor

    const Point& getP1() const; // Getter for the first vertex
    const Point& getP2() const; // Getter for the second vertex
    const Point& getP3() const; // Getter for the third vertex
};
