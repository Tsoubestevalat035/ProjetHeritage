#include "Player.h"
#include <iostream>

Player::Player() {

	positionX = 10;
	positionY = 10;
}

void Player::deplacer(char touche) {

	if (touche == 'z' || touche == 'Z') {
		positionY = positionY - 1;
	}

	if (touche == 's' || touche == 'S') {
		positionY = positionY + 1;
	}

	if (touche == 'q' || touche == 'Q') {
		positionX = positionX - 1;
	}

	if (touche == 'd' || touche == 'D') {
		positionX = positionX + 1;
	}
}

int Player::getX() const { return positionX; }
int Player::getY() const { return positionY; }