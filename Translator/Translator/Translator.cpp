#include <iostream>
#include "Triangulation.h"
#include "Reader.h"
#include "Writer.h"

using namespace std;

int main() {
    Reader re; // Create a Reader object
    vector<Point> get_points = re.reader(); // Read points from the STL file
    vector<double> u_points = re.unique(); // Get unique coordinates

    Triangulation t; // Create a Triangulation object
    vector<Triangle> get_triangles = t.addUniquePoints(get_points); // Generate triangles from unique points

    Writer w; // Create a Writer object
    w.writer(get_triangles, u_points); // Write triangles and unique points to the output file

    return 0; 
}
