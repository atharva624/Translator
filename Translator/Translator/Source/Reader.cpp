#include "Reader.h"
#include <string>
#include <sstream>
#include <unordered_map>

std::vector<Point> Reader::reader() {
    std::ifstream stlFile("cube-ascii.stl");
    std::unordered_map<double, int> coordinateMap;
    std::string stlLine;
    int currentIndex = 0, xIndex, yIndex, zIndex;

    while (getline(stlFile, stlLine)) {
        std::string keyword;
        std::istringstream lineStream(stlLine);
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

std::vector<double> Reader::unique() const {
    return uniqueCoordinates;
}
