#ifndef MAPGEN_H
#define MAPGEN_H

#include <vector>

#define MAX_WIDTH 500
#define MAX_HEIGHT 500

class MapGen
{
protected:
    int width, height;
    char map[MAX_WIDTH][MAX_HEIGHT];

public:
    MapGen(int width, int height);

    virtual void generateMap();
    void printMap(const char * fName);

};

#endif // MAPGEN_H
