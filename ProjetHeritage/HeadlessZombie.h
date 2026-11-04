#pragma once
#include "Entities.h"
#include "Ennemies.h"
#include <cstdlib>

class HeadlessZombie : public Ennemies
{
public:
    HeadlessZombie(int index)
        : Ennemies(index)
    {
        life = 40;
        power = 60;
    }

    void move(int joueurX, int joueurY) override
    {
        int differenceX = joueurX - position().X;
        int differenceY = joueurY - position().Y;

        if (std::abs(differenceX) >= std::abs(differenceY))
        {
            if (differenceX > 0)
                position().X++;
            else if (differenceX < 0)
                position().X--;
        }
        else
        {
            if (differenceY > 0)
                position().Y++;
            else if (differenceY < 0)
                position().Y--;
        }
    }
};