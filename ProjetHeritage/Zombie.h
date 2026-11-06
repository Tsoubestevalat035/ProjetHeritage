#pragma once
#include "Entities.h"
#include "Ennemies.h"
#include <cstdlib>

class Zombie : public Ennemies
{
public:
    Zombie(int index, int x, int y)
        : Ennemies(index, x, y)
    {
        life = 80;
        power = 30;
    }

	void correctionposition(const int carte[])
	{
		
	}
    void move(int joueurX, int joueurY) override
    {
        (void)joueurX;
        (void)joueurY;
        int direction = std::rand() % 4;
        switch (direction)
        {
        case 0:
            position().Y--;
            break;
        case 1:
            position().Y++;
            break;
        case 2:
            position().X--;
            break;
        case 3:
            position().X++;
            break;
        }
    }
};