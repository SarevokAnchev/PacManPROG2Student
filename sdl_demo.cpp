//
// Created by Louis Rigal on 05/10/2023.
//

#include "sdl_demo.h"

#include <SDL.h>

void demo() {
    // création d'une fenêtre graphique
    const int WIN_X = 1280;
    const int WIN_Y = 640;
    SDL_Window* window = SDL_CreateWindow(
            "PacMan",
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
            WIN_X, WIN_Y,
            SDL_WINDOW_SHOWN
    );
    // création d'un système de rendu
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    // chargement des texures
    SDL_Surface* surf = SDL_LoadBMP("sprites/ghost1.bmp");
    SDL_Texture* ghost_texture = SDL_CreateTextureFromSurface(renderer, surf);
    SDL_FreeSurface(surf);

    surf = SDL_LoadBMP("sprites/pacman.bmp");
    SDL_Texture* pacman_texture = SDL_CreateTextureFromSurface(renderer, surf);
    SDL_FreeSurface(surf);

    surf = SDL_LoadBMP("sprites/powerup.bmp");
    SDL_Texture* powerup_texture = SDL_CreateTextureFromSurface(renderer, surf);
    SDL_FreeSurface(surf);

    int pacman_x = WIN_X/2;
    int pacman_y = WIN_Y/2;

    bool finished = false;
    while(!finished) {
        // effacement de la frame
        SDL_RenderClear(renderer);

        // construction de la frame à afficher
        SDL_Rect ghost_position{WIN_X/4, 3*WIN_Y/4, 32, 32};
        SDL_RenderCopy(renderer, ghost_texture, nullptr, &ghost_position);

        // position de la texture à afficher (chaque texture fait 32x32px)
        SDL_Rect pacman_position{pacman_x, pacman_y, 32, 32};
        // copie de la texture dans la frame
        SDL_RenderCopy(renderer, pacman_texture, nullptr, &pacman_position);

        SDL_Rect powerup_position{3*WIN_X/4, WIN_Y/4, 32, 32};
        SDL_RenderCopy(renderer, powerup_texture, nullptr, &powerup_position);

        // affichage de la frame
        SDL_RenderPresent(renderer);

        // attente d'une entrée clavier de l'utilisateur
        SDL_Event event;
        SDL_WaitEvent(&event);
        if (event.type == SDL_KEYDOWN) {
            auto key = event.key.keysym.sym;
            switch (key) {
                case SDLK_LEFT:
                    pacman_x -= 10;
                    break;
                case SDLK_RIGHT:
                    pacman_x += 10;
                    break;
                case SDLK_UP:
                    pacman_y -= 10;
                    break;
                case SDLK_DOWN:
                    pacman_y += 10;
                    break;
                default:
                    finished = true;
                    break;
            }
        }
    }
    // Libération de la mémoire en fin de programme
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
