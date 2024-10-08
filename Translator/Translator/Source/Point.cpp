#include "Point.h"

Point::Point(int xCoord, int yCoord, int zCoord) : x(xCoord), y(yCoord), z(zCoord) {}

Point::~Point() {}



int Point::getX() const { return x; }
int Point::getY() const { return y; }
int Point::getZ() const { return z; }
