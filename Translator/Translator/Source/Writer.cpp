#include "Writer.h"

void Writer::writer(std::vector<Triangle> triangles, std::vector<double> points) {
    std::ofstream outputFile("output.dat"); // Open output file

    // Write each triangle's vertices to the output file
    for (const auto& triangle : triangles) {
        outputFile << points[triangle.getP1().getX()] << " " << points[triangle.getP1().getY()] << " " 
                   << points[triangle.getP1().getZ()] << std::endl; // Write vertex 1
        outputFile << points[triangle.getP2().getX()] << " " 
                   << points[triangle.getP2().getY()] << " " 
                   << points[triangle.getP2().getZ()] << std::endl; // Write vertex 2
        outputFile << points[triangle.getP3().getX()] << " " 
                   << points[triangle.getP3().getY()] << " " 
                   << points[triangle.getP3().getZ()] << std::endl; // Write vertex 3
        outputFile << points[triangle.getP1().getX()] << " " 
                   << points[triangle.getP1().getY()] << " " 
                   << points[triangle.getP1().getZ()] << std::endl; // Repeat first vertex for closure
        outputFile << std::endl; // Add a blank line between triangles
    }

    outputFile.close(); // Close the output file
}
