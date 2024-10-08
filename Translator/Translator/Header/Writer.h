#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Point.h"
#include "Triangle.h"

class Writer {
public:
    void writer(std::vector<Triangle> getTriangles, std::vector<double> getPoints);
};
