#ifndef CELLULARAUTOMATA_H
#define CELLULARAUTOMATA_H

#include"mapgen.h"
#include <iostream>

class CellularAutomata : public MapGen
{
protected:
    int p_iniWall;

    char randPick();
    void initialiseMap();
    void generation();

public:
    CellularAutomata(int width, int height, int p_IW);

    void generateMap();
};

#endif // CELLULARAUTOMATA_H
