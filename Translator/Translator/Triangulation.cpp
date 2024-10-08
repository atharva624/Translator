#include "Triangulation.h"

std::vector<Triangle> Triangulation::addUniquePoints(std::vector<Point> points) {
    std::vector<Triangle> uniqueTriangles;

    if (points.size() % 3 == 0) {
        int triangleCount = points.size() / 3;

        for (int i = 0; i < triangleCount; i++) {
            Point vertex1(points[(i * 3) + 0].getX(), points[(i * 3) + 0].getY(), points[(i * 3) + 0].getZ());
            Point vertex2(points[(i * 3) + 1].getX(), points[(i * 3) + 1].getY(), points[(i * 3) + 1].getZ());
            Point vertex3(points[(i * 3) + 2].getX(), points[(i * 3) + 2].getY(), points[(i * 3) + 2].getZ());
            Triangle triangle(vertex1, vertex2, vertex3);
            uniqueTriangles.push_back(triangle);
        }
    }

    return uniqueTriangles;
}
