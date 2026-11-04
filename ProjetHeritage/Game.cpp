#include "Game.h"
#include <iostream>
#include "conio.h"
#include "Player.h"

void Game::run() {
    std::cout << "Le jeu est lance avec succes !" << std::endl;

    Player monjoueur;

    std::cout << "Position de depart : X = "
              << monjoueur.getX()
              << ", Y = "
              << monjoueur.getY()
              << std::endl;

    while (true) {
        const char touche = _getch();
        std::system("cls");

        if (touche == 27) {
            break;
        }

        if (touche == 'z' || touche == 'Z' ||
            touche == 'q' || touche == 'Q' ||
            touche == 's' || touche == 'S' ||
            touche == 'd' || touche == 'D') {
            monjoueur.clavier(touche);

            std::cout << "Nouvelle position -> X = "
                      << monjoueur.getX()
                      << ", Y = "
                      << monjoueur.getY()
                      << std::endl;
        }
    }
}




