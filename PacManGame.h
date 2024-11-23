//
// Created by ltsi on 28/09/23.
//

#ifndef PACMANPROG2_PACMANGAME_H
#define PACMANPROG2_PACMANGAME_H

#include <string>
#include <memory>

#include "global.h"
#include "Map.h"
#include "RenderingMethod.h"

class PacManGame {
private:
    Map map;
    Position player_position;
    std::unique_ptr<RenderingMethod> ren;

public:
    explicit PacManGame(const std::string& map_file, bool console=true);

    void play();
};

#endif //PACMANPROG2_PACMANGAME_H
