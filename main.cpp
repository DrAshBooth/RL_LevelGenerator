#include <iostream>

#include <mapgen.h>
#include <cellularautomata.h>

int main()
{
    std::cout << "Starting map generator" << std::endl;
    // http://www.roguebasin.com/index.php?title=Complete_Roguelike_Tutorial,_using_python%2Blibtcod
    // TODO finish CA generator
    // TODO implement BSP tree for generating rooms

//    MapGen* mg = new MapGen(180,70);
//    mg->generateMap();
//    mg->printMap("/Users/user/Desktop/map.txt");

    CellularAutomata* ca = new CellularAutomata(170,70,40);
    ca->generateMap();
}

