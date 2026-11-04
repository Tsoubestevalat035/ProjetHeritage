#include "Player.h"
#include <iostream>

Player::Player()
{
    positions.Player = { 0, 0 };
}

void Player::deplacer(char touche)
{
    if (touche == 'z' || touche == 'Z')
    {
        positions.Player.Y--;
    }

    if (touche == 's' || touche == 'S')
    {
        positions.Player.Y++;
    }

    if (touche == 'q' || touche == 'Q')
    {
        positions.Player.X--;
    }

    if (touche == 'd' || touche == 'D')
    {
        positions.Player.X++;
    }
}

int Player::getX() const
{
    return positions.Player.X;
}

int Player::getY() const
{
    return positions.Player.Y;
}