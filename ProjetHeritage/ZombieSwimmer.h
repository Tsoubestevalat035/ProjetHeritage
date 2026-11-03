#pragma once
#include "Swimmer.h"
#include "Zombie.h"

class ZombieSwimmer : Zombie, Swimmer
{
public:;
      ZombieSwimmer()
      {
          life = 40;
          power = 60;
      }
};

