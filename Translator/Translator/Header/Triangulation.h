#pragma once
#include "Point.h"
#include "Triangle.h"
#include <vector>

// Class for managing triangulation of points
class Triangulation {
private:
    std::vector<double> points; // Stores unique points for triangulation

public:
    std::vector<Triangle> addUniquePoints(std::vector<Point> points); // Method to add unique points and create triangles
};
