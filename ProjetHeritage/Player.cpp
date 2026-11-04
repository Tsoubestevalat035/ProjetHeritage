#include "Player.h"
#include <iostream>

Player::Player() {

	positionX = 0;
	positionY = 0;
}

void Player::deplacer(char touche) {

	if (touche == 'z' || touche == 'Z') {
		positionY--;
	}

	if (touche == 's' || touche == 'S') {
		positionY++;
	}

	if (touche == 'q' || touche == 'Q') {
		positionX--;
	}

	if (touche == 'd' || touche == 'D') {
		positionX++;
	}
}

int Player::getX() const { return positionX; }
int Player::getY() const { return positionY; }