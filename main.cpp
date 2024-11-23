#include <iostream>

#include "PacManGame.h"
#include "sdl_demo.h"

int main(int argc, char *argv[])
{
    std::cout << "Mode console ? (o/n) ";
    char console;
    std::cin >> console;
    if (console == 'o') {
        PacManGame game("../maps/level_01.txt", true);
        game.play();
    }
    else {
        demo();
    }
    return 0;
}
