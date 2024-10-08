#pragma once
#include "Point.h"
#include "Triangle.h"
#include <vector>

class Triangulation {
private:
    std::vector<double> points;

public:
    std::vector<Triangle> addUniquePoints(std::vector<Point> points);
};
