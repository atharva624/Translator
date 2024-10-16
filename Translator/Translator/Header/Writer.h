#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Point.h"
#include "Triangle.h"

// Class for writing triangle and point data to a file
class Writer {
public:
    void writer(std::vector<Triangle> getTriangles, std::vector<double> getPoints); // Method to write triangles and points to a file
};
