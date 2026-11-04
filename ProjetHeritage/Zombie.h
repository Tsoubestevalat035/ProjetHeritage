#pragma once
#include "Entities.h"
#include "Ennemies.h"
#include <cstdlib>

class Zombie : public Ennemies, public Entities
{
public:
    Zombie()
    {
        life = 80;
        power = 30;
        X = 0;
		Y = 0;
    }

    void move(int PlayerX, int PlayerY) override
    {
        (void)PlayerX;
        (void)PlayerY;

        int direction = std::rand() % 4;

        switch (direction)
        {
		case 0: // Move up
            Y--;
            break;

		case 1: // Move down
            Y++;
            break;

		case 2: // Move left
            X--;
            break;

		case 3: // Move right
            X++;
            break;
        }
    }
};