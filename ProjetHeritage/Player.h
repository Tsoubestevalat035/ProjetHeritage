#pragma once
#include "Entities.h"
#include <iostream>
#include <conio.h>
#include <string>

class Player : public Entities
{
public:
    Player();

    void deplacer(char touche);

    int getX() const;
    int getY() const;
};
