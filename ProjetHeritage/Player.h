#pragma once
#include "Entities.h"
#include <iostream>
#include <conio.h>
#include <string>

class Player : Entities
{
private:

	int positionX = 0;
	int positionY = 0;

public:

	Player();

	void deplacer(char touche);

	int getX() const;
	int getY() const;

};
