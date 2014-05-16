#include "cellularautomata.h"


CellularAutomata::CellularAutomata(int width, int height, int pIW) :
    MapGen(width, height)
{
    this->p_iniWall = pIW;
}

char CellularAutomata::randPick() {
    return (rand()%100 < this->p_iniWall) ? '#' : '.';
}

void CellularAutomata::initialiseMap() {
    for (int y = 0; y < this->height; ++y) {
        for (int x = 0; x < this->width; ++x) {
            if (x == 0 || x == this->width-1 || y == 0 || y == this->height-1) {
                // Edge of Map, add a wall.
                this->map[x][y] = '#';
            }
            else {
                this->map[x][y] = this->randPick();
            }
        }
    }
}

void CellularAutomata::generation() {
    /* The for loops exclude the outer walls of the map,
     * we don't want them to change */
     // TODO need to copy values into new map, see: http://gamedevelopment.tutsplus.com/tutorials/cave-levels-cellular-automata--gamedev-9664
    for (int y = 1; y < this->height-1; ++y) {
        for (int x = 1; x < this->width-1; ++x) {
            // Usual CA logic
            int numNeighbours = 0;
            for (int ix = -1; ix <=1; ix++) {
                for (int iy = -1; iy <=1; iy++) {
                    if(this->map[x+ix][y+iy] != '.') {
                        numNeighbours++;
                    }
                }
            }
            // Empty space checker
            int numNeighbours2 = 0;
            for (int ix = -2; ix <=2; ix++) {
                for (int iy = -2; iy <=2; iy++) {
                    if(abs(ix-y)==2 && abs(iy-x)==2) {
                        continue;
                    }
                    if(ix<0 || iy<0 || ix>=this->width|| iy>=this->height) {
                        continue;
                    }
                    if(this->map[x+ix][y+iy] != '.') {
                        numNeighbours2++;
                    }
                }
            }
        }
    }
}

void CellularAutomata::generateMap() {
    for(int i=0; i<10; ++i) {
        std::cout << this->randPick() << std::endl;
    }
}
