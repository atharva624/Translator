#include "Triangulation.h"
#include "Point.h"
#include "Reader.h"
#include "Triangle.h"
#include <vector>

vector<Triangle> Triangulation::addUniquePoints(vector<Point> points) {
    vector<Triangle> uniqueTriangles;

    if (points.size() % 3 == 0) {
        int triangleCount = points.size() / 3;

        for (int i = 0; i < triangleCount; i++) {
            Point vertex1(points[(i * 3) + 0].x, points[(i * 3) + 0].y, points[(i * 3) + 0].z);
            Point vertex2(points[(i * 3) + 1].x, points[(i * 3) + 1].y, points[(i * 3) + 1].z);
            Point vertex3(points[(i * 3) + 2].x, points[(i * 3) + 2].y, points[(i * 3) + 2].z);
            Triangle triangle(vertex1, vertex2, vertex3);
            uniqueTriangles.push_back(triangle);
        }
    }

    return uniqueTriangles;
}
