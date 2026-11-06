#include "Map.h"

#include <iostream>

#include "Ennemies.h"

void Map::creationcarte(
    int joueurX,
    int joueurY,
    Ennemies* ennemis[],
    int nombreEnnemis
) const
{
    for (int y = 0; y < NBLIGNES; y++)
    {
        for (int x = 0; x < NBCOLONNES; x++)
        {
            bool affiche = false;

            if (joueurX == x && joueurY == y)
            {
                std::cout << " H ";
                affiche = true;
            }
            else
            {
                for (int i = 0; i < nombreEnnemis; i++)
                {
                    if (ennemis[i] != nullptr &&
                        ennemis[i]->getX() == x &&
                        ennemis[i]->getY() == y)
                    {
                        std::cout << " Z ";
                        affiche = true;
                        break;
                    }
                }
            }

            if (!affiche)
            {
                std::cout << indexbloque[carte[y * NBCOLONNES + x]];
            }
        }

        std::cout << '\n';
    }
}