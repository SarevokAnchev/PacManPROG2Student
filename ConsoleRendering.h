//
// Created by louis on 28/09/23.
//

#ifndef PACMANPROG2_CONSOLERENDERING_H
#define PACMANPROG2_CONSOLERENDERING_H

#include "RenderingMethod.h"
#include "global.h"

class ConsoleRendering : public RenderingMethod {
private:

public:
    ConsoleRendering();
    ~ConsoleRendering() override = default;
    Direction update(const Map& map, Position player_pos) override;
};


#endif //PACMANPROG2_CONSOLERENDERING_H
