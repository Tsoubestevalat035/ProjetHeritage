#include "Game.h"
#include <iostream>
#include "conio.h"
#include "Player.h"

void Game::run() {
    std::cout << "Le jeu est lance avec succes !" << std::endl;

    Player monjoueur;
    char touche;

    std::cout << "positon de depart : X = " << monjoueur.getX() << ", Y = " << monjoueur.getY() << std::endl;

    while (true) {

        touche = _getch();

        if (touche == 'a' || touche == 'A') {
            break;
        }
    }

    monjoueur.deplacer(touche);

    std::cout << "nouvelle position -> X = " << monjoueur.getX() << " , Y = " << monjoueur.getY() <<std::endl;

}




