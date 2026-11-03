#pragma once
#include "Ennemies.h"

class Zombie : public Ennemies
{
public:
    Zombie()
    {
        life = 80;
        power = 30;
    }
};
