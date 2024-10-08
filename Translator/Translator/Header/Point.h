#pragma once
#include <iostream>
using namespace std;

class Point {
private:
    int x, y, z;

public:
    Point(int x, int y, int z);
    ~Point();
    void getCoordinates() const;
    int getX() const;
    int getY() const;
    int getZ() const;
};
