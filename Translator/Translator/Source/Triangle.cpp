#include "Triangle.h"

Triangle::Triangle(Point vertex1, Point vertex2, Point vertex3) : p1(vertex1), p2(vertex2), p3(vertex3) {}

Triangle::~Triangle() {}

const Point& Triangle::getP1() const { return p1; }
const Point& Triangle::getP2() const { return p2; }
const Point& Triangle::getP3() const { return p3; }

