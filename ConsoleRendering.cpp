//
// Created by louis on 28/09/23.
//

#include "ConsoleRendering.h"

#include <iostream>

ConsoleRendering::ConsoleRendering() {}

Direction ConsoleRendering::update(const Map &map, Position player_pos) {
    int w = map.ncols();
    int h = map.nrows();
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << map.at(i, j);
        }
        std::cout << std::endl;
    }
    char direction;
    std::cin >> direction;
    if (direction == 'z') {
        return Direction::UP;
    }
    else if (direction == 'q') {
        return Direction::LEFT;
    }
    else if (direction == 's') {
        return Direction::DOWN;
    }
    else if (direction == 'd') {
        return Direction::RIGHT;
    }
    return Direction::NONE;
}
