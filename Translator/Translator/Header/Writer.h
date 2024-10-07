#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <string>
#include "Point.h"
#include "Triangle.h"

class Writer {
public:
    void writer(vector<Triangle> getTriangles, vector<double> getPoints);
};
