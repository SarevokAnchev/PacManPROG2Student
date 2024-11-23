//
// Created by ltsi on 28/09/23.
//

#include "Map.h"

Map::Map() {
    // TODO : écrire un constructeur qui lit dans un fichier passé en paramètres
    tiles = {{Tile::WALL, Tile::WALL, Tile::WALL, Tile::WALL, Tile::WALL},
             {Tile::WALL, Tile::PLAYER, Tile::PATH, Tile::FOOD, Tile::WALL},
             {Tile::WALL, Tile::PATH, Tile::WALL, Tile::FOOD, Tile::WALL},
             {Tile::WALL, Tile::FOOD, Tile::FOOD, Tile::POWERUP, Tile::WALL},
             {Tile::WALL, Tile::WALL, Tile::WALL, Tile::WALL, Tile::WALL}};
    cols = 5;
    rows = 5;
}

Tile Map::at(int r, int c) const { return tiles[r][c]; }
