#pragma once

#include "Swimmer.h"
#include "Zombie.h"

class ZombieSwimmer : public Zombie, public Swimmer
{
public:
    ZombieSwimmer(int index)
        : Zombie(index)
    {
        life = 40;
        power = 60;
    }
};