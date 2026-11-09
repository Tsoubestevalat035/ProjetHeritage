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
				std::cout << indexbloque[cartes[indexcarte][y * NBCOLONNES + x]];
			}
		}

		std::cout << '\n';
	}
}
void Map::changerCarte(
	int  joueurX,
	int  joueurY
)
{
	if (joueurX < 0 || joueurX >= NBCOLONNES ||
		joueurY < 0 || joueurY >= NBLIGNES ||
		indexcarte < 0 || indexcarte >= NB_CARTES - 1)
	{
		return;
	}

	const int indexCase = joueurY * NBCOLONNES + joueurX;
	if (cartes[indexcarte][indexCase] == 3)
	{
		indexcarte++;
	}
    if (indexcarte == 2)
    {
        std::cout << "dernier niveau du jeu, pas de possiblité de retou en arriere \n";
    }
}