#pragma once
#include "Point.h"
#include "Triangle.h"
#include <vector>

class Triangulation {
public:
    vector<double> points;
    vector<Triangle> addUniquePoints(vector<Point> points);
};
