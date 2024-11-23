//
// Created by ltsi on 28/09/23.
//

#ifndef PACMANPROG2_MAP_H
#define PACMANPROG2_MAP_H

#include "global.h"

#include <vector>

enum Tile : char {
    PATH = ' ',
    FOOD = 'o',
    WALL = '#',
    POWERUP = '+',
    GHOST = 'H',
    GHOST_SPAWN = 'F',
    PLAYER = 'C',
    PLAYER_SPAWN = 'P',
    GHOST_ON_FOOD = 'R',
    GHOST_ON_POWERUP = 'B',
};

class Map {
private:
    int rows;
    int cols;
    std::vector<std::vector<Tile>> tiles;

public:
    // TODO : implémenter les méthodes manquantes dans Map
    Map();
    Tile at(int r, int c) const;

    int nrows() const { return rows; };
    int ncols() const { return cols; };
};

#endif //PACMANPROG2_MAP_H
