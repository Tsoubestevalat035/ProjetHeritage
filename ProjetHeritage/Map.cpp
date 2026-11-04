#include <iostream>
#include "Map.h"

void Map::creationcarte(int JoueurX, int JoueurY) const
 {
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (JoueurX == j && JoueurY == i)
            {
                std::cout << " H ";

            }
            else
            {
                std::cout << indexbloque[tableau[i * 20 + j]];
            }
        }
        std::cout << '\n';
    }
}
