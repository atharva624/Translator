#include "Reader.h"
#include <string>
#include <sstream>
#include "Point.h"
#include <vector>
#include <unordered_map>

vector<Point> extractedPoints;
vector<double> uniqueCoordinates;

vector<Point> Reader::reader() {
    ifstream stlFile("cube-ascii.stl");
    unordered_map<double, int> coordinateMap;
    string stlLine;
    int currentIndex = 0, xIndex, yIndex, zIndex;

    while (getline(stlFile, stlLine)) {
        string keyword;
        istringstream lineStream(stlLine);
        double xCoord, yCoord, zCoord;

        if (lineStream >> keyword >> xCoord >> yCoord >> zCoord) {
            if (keyword == "vertex") {
                if (coordinateMap.find(xCoord) == coordinateMap.end()) {
                    coordinateMap[xCoord] = currentIndex;
                    xIndex = currentIndex;
                    uniqueCoordinates.push_back(xCoord);
                    currentIndex++;
                }
                else {
                    xIndex = coordinateMap[xCoord];
                }

                if (coordinateMap.find(yCoord) == coordinateMap.end()) {
                    coordinateMap[yCoord] = currentIndex;
                    yIndex = currentIndex;
                    uniqueCoordinates.push_back(yCoord);
                    currentIndex++;
                }
                else {
                    yIndex = coordinateMap[yCoord];
                }

                if (coordinateMap.find(zCoord) == coordinateMap.end()) {
                    coordinateMap[zCoord] = currentIndex;
                    zIndex = currentIndex;
                    uniqueCoordinates.push_back(zCoord);
                    currentIndex++;
                }
                else {
                    zIndex = coordinateMap[zCoord];
                }

                Point vertex(xIndex, yIndex, zIndex);
                extractedPoints.push_back(vertex);
            }
        }
    }
    return extractedPoints;
}

vector<double> Reader::unique() {
    return uniqueCoordinates;
}
