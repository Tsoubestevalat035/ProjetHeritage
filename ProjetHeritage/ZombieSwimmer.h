#pragma once

#include "Swimmer.h"
#include "Zombie.h"

class ZombieSwimmer : public Zombie, public Swimmer
{
public:
    ZombieSwimmer(int index, int x, int y)
        : Zombie(index, x, y), Swimmer(index)
    {
        life = 40;
        power = 60;
    }
};