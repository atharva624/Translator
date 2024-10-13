#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Point.h"

// Class for reading and storing points
class Reader {
private:
    std::vector<Point> extractedPoints; // Stores extracted Point objects
    std::vector<double> uniqueCoordinates; // Stores unique coordinates

public:
    std::vector<Point> reader(); // Method to read points from a source
    std::vector<double> unique() const; // Method to get unique coordinates
};
