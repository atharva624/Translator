#include "Writer.h"

void Writer::writer(vector<Triangle> triangles, vector<double> points) {
    ofstream outputFile("output.dat");

    for (const auto& triangle : triangles) {
        outputFile << points[triangle.p1.x] << " " << points[triangle.p1.y] << " " << points[triangle.p1.z] << endl;
        outputFile << points[triangle.p2.x] << " " << points[triangle.p2.y] << " " << points[triangle.p2.z] << endl;
        outputFile << points[triangle.p3.x] << " " << points[triangle.p3.y] << " " << points[triangle.p3.z] << endl;
        outputFile << points[triangle.p1.x] << " " << points[triangle.p1.y] << " " << points[triangle.p1.z] << endl;
        outputFile << endl;
        outputFile << endl;
    }

    outputFile.close();
}
