#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Point.h"

using namespace std;

class Reader {
public:
    vector<Point> reader();
    vector<double> unique();
};
