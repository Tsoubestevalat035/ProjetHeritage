#include "Game.h"
#include <iostream>
#include "conio.h"
#include "Player.h"
#include "Map.h"
#include "Ennemies.h"
#include "ZombieSwimmer.h"
#include "Zombie.h"
#include "Swimmer.h"
#include "HeadlessZombie.h"

void Game::run() {
    std::cout << "Le jeu est lance avec succes !" << std::endl;

    Player monjoueur;
	Map macarte;
    Zombie monzombie(0, 5, 2);
    HeadlessZombie monHeadless(1, 10, 2);
    ZombieSwimmer monSwimmer(2, 15, 2);

    Ennemies* ennemis[] =
    {
        &monzombie,
        &monHeadless,
        &monSwimmer
    };
    


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

			for (int i = 0; i < 3; i++) {
                ennemis[i]->move(monjoueur.getX(), monjoueur.getY());
            }

            monzombie.correctionposition(macarte.carte);

            macarte.creationcarte(
                monjoueur.getX(),
                monjoueur.getY(),
                ennemis,
                3
            );
        }
    }
}