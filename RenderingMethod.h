//
// Created by ltsi on 28/09/23.
//

#ifndef PACMANPROG2_RENDERINGMETHOD_H
#define PACMANPROG2_RENDERINGMETHOD_H

#include "global.h"
#include "Map.h"

class RenderingMethod {
public:
    virtual Direction update(const Map& map, Position player_pos) = 0;
    virtual ~RenderingMethod() = default; // crée un destructeur trivial
};

#endif //PACMANPROG2_RENDERINGMETHOD_H
