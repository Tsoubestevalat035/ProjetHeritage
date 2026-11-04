#include "Game.h"
#include <iostream>
#include "conio.h"
#include "Player.h"
#include "Map.h"
#include "Ennemies.h"

void Game::run() {
    std::cout << "Le jeu est lance avec succes !" << std::endl;

    Player monjoueur;
	Map macarte;


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
            monjoueur.deplacer(touche);

            std::cout << "Nouvelle position -> X = "
                      << monjoueur.getX()
                      << ", Y = "
                      << monjoueur.getY()
                      << std::endl;

			macarte.creationcarte(monjoueur.getX(), monjoueur.getY()); //affiche la carte avec les entité qui la compose

        }
    }
}