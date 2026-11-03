#include <iostream>
#include "Map.h"

void Map::creationcarte() const
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            std::cout << indexbloque[tableau[i * 20 + j]];
        }

        std::cout << '\n';
    }
}
