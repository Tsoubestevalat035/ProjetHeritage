#pragma once
#include "Ennemies.h"

class HeadlessZombie : public Ennemies
{
public:
    HeadlessZombie()
    {
        life = 40;
        power = 60;
    }
};

