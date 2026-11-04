#pragma once
#include "Entities.h"
#include "Ennemies.h"
#include <cstdlib>

class Zombie : public Ennemies
{
public:
    Zombie()
    {
        life = 80;
        power = 30;
    }

    void move(int PlayerX, int PlayerY) override
    {
        (void)PlayerX;
        (void)PlayerY;

        int direction = std::rand() % 4;

        switch (direction)
        {
        case 0:
            positionEnnemi().Y--;
            break;

        case 1:
            positionEnnemi().Y++;
            break;

        case 2:
            positionEnnemi().X--;
            break;

        case 3:
            positionEnnemi().X++;
            break;
        }
    }
};