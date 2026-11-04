#pragma once
#include "Entities.h"
#include "Ennemies.h"
#include <cstdlib>

class HeadlessZombie : public Ennemies, public Entities
{
public:
    HeadlessZombie()
    {
        life = 40;
        power = 60;
        X = 0;
        Y = 0;
    }

    void move(int PlayerX, int PlayerY) override
    {
        int differenceX = PlayerX - X;
        int differenceY = PlayerY - Y;

        if (std::abs(differenceX) >= std::abs(differenceY))
        {
            if (differenceX > 0)
            {
                X++;
            }
            else if (differenceX < 0)
            {
                X--;
            }
        }
        else
        {
            if (differenceY > 0)
            {
                Y++;
            }
            else if (differenceY < 0)
            {
                Y--;
            }
        }
    }
};