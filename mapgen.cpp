#include "mapgen.h"
#include <iostream>
#include <fstream>

MapGen::MapGen(int width, int height)
{
    this->width  = width;
    this->height = height;
}

void MapGen::generateMap() {
    for (int y = 0; y < this->height; ++y) {
        for (int x = 0; x < this->width; ++x) {
            this->map[x][y] = '#';
        }
    }
}

void MapGen::printMap(const char *fName) {
    std::ofstream outFile;
    outFile.open(fName);
    for (int y = 0; y < this->height; ++y) {
        for (int x = 0; x < this->width; ++x) {
            outFile << this->map[x][y];
        }
        outFile << std::endl;
    }
    outFile.close();
}
