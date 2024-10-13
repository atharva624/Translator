#pragma once
#include <iostream>
using namespace std;

// Class representing a point in 3D space
class Point {
private:
    int x, y, z; // Coordinates

public:
    Point(int x, int y, int z); // Constructor to initialize coordinates
    ~Point(); // Destructor

    int getX() const; // Getter for x coordinate
    int getY() const; // Getter for y coordinate
    int getZ() const; // Getter for z coordinate
};
