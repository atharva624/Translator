#include <iostream>
#include "Triangulation.h"
#include "Reader.h"
#include "Writer.h"

using namespace std;

int main() {
    Reader re;
    vector<Point> get_points = re.reader();
    vector<double> u_points = re.unique();

    Triangulation t;
    vector<Triangle> get_triangles = t.addUniquePoints(get_points);

    Writer w;
    w.writer(get_triangles, u_points);

    return 0;
}
