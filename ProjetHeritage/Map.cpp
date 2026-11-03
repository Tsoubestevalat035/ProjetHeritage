#include <iostream>
#include "Map.h"
#include "Game.h"

void Map::creationcarte() const
{
    for (int i = 0; i < NBLIGNES; i++)
    {
        for (int j = 0; j < NBCOLONNES; j++)
        {
            std::cout << indexbloque[tableau[i * NBCOLONNES + j]];
        }

        std::cout << '\n';
    }
}