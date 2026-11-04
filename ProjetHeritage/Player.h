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

	void clavier (char touche);

	int getX() const;
	int getY() const;
	void deplacer(int JoueurX, int JoueurY);
};
