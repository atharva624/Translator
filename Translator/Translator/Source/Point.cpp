#include "Point.h"

Point::Point(int xCoord, int yCoord, int zCoord) : x(xCoord), y(yCoord), z(zCoord) {}

Point::~Point() {}

void Point::getCoordinates() {
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}
