#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Point.h"

class Reader {
private:
    std::vector<Point> extractedPoints;
    std::vector<double> uniqueCoordinates;

public:
    std::vector<Point> reader();
    std::vector<double> unique() const;
};
