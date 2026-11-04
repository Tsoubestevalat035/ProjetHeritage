#pragma once
#include "Entities.h"
#include "Ennemies.h"
#include <cstdlib>

class HeadlessZombie : public Ennemies
{
public:
    HeadlessZombie()
    {
        life = 40;
        power = 60;
    }

    void move(int PlayerX, int PlayerY) override
    {
        int differenceX = PlayerX - positionEnnemi().X;
        int differenceY = PlayerY - positionEnnemi().Y;

        if (std::abs(differenceX) >= std::abs(differenceY))
        {
            if (differenceX > 0)
            {
                positionEnnemi().X++;
            }
            else if (differenceX < 0)
            {
                positionEnnemi().X--;
            }
        }
        else
        {
            if (differenceY > 0)
            {
                positionEnnemi().Y++;
            }
            else if (differenceY < 0)
            {
                positionEnnemi().Y--;
            }
        }
    }
};