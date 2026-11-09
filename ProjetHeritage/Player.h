#pragma once
#include "Entities.h"
#include <iostream>
#include <conio.h>
#include <string>

class Player : public Entities
{
public:
    Player();
	int X = 0;
	int Y = 0;

    void deplacer(char touche);

    int getX() const;
    int getY() const;
};
