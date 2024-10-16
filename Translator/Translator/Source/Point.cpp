#include "Point.h"

// Constructor to initialize the point's coordinates
Point::Point(int xCoord, int yCoord, int zCoord) : x(xCoord), y(yCoord), z(zCoord) {}

// Destructor
Point::~Point() {}

// Getter for the x coordinate
int Point::getX() const { return x; }

// Getter for the y coordinate
int Point::getY() const { return y; }

// Getter for the z coordinate
int Point::getZ() const { return z; }
