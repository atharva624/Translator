#include "Writer.h"

void Writer::writer(std::vector<Triangle> triangles, std::vector<double> points) {
    std::ofstream outputFile("output.dat");

    for (const auto& triangle : triangles) {
        outputFile << points[triangle.getP1().getX()] << " " << points[triangle.getP1().getY()] << " " << points[triangle.getP1().getZ()] << std::endl;
        outputFile << points[triangle.getP2().getX()] << " " << points[triangle.getP2().getY()] << " " << points[triangle.getP2().getZ()] << std::endl;
        outputFile << points[triangle.getP3().getX()] << " " << points[triangle.getP3().getY()] << " " << points[triangle.getP3().getZ()] << std::endl;
        outputFile << points[triangle.getP1().getX()] << " " << points[triangle.getP1().getY()] << " " << points[triangle.getP1().getZ()] << std::endl;
        outputFile << std::endl;
        outputFile << std::endl;
    }

    outputFile.close();
}
