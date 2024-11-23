//
// Created by ltsi on 28/09/23.
//

#include "PacManGame.h"

#include <stdexcept>

#include "RenderingMethod.h"
#include "ConsoleRendering.h"

PacManGame::PacManGame(const std::string &map_file, bool console) {
    // TODO : initialisation de l'attribut map avec le fichier demandé
    if (console) {
        ren = std::unique_ptr<RenderingMethod>(new ConsoleRendering());
    }
    else {
        // TODO : créer un objet de type GraphicRendering, une fois cette classe définie
        throw std::logic_error("Unimplemented functionality.");
    }
}

void PacManGame::play() {
    while (true) {
        // TODO : affichage de la partie et demande de l'intention du joueur par ren->update()
        auto direction = ren->update(map, player_position);

        // TODO : mise à jour de la Map avec l'intention de jeu du joueur

        // TODO : parcours de la liste de fantômes, et appels à leurs fonctions de déplacmeent

        // TODO : mise à jour de la carte avec les nouvelles positions des fantômes
    }
}
