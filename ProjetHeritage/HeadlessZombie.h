#pragma once

#include "Ennemies.h"
#include <cstdlib>

class HeadlessZombie : public Ennemies
{
public:
    bool dumb = true;

    HeadlessZombie()
    {
        life = 40;
        power = 60;
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