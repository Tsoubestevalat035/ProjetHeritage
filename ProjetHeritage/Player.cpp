#include "Player.h"
#include <iostream>

Player::Player()
{
    positions.player = { 0, 0 };
}

void Player::deplacer(char touche)
{
    if (touche == 'z' || touche == 'Z')
    {
        positions.player.Y--;
    }

    if (touche == 's' || touche == 'S')
    {
        positions.player.Y++;
    }

    if (touche == 'q' || touche == 'Q')
    {
        positions.player.X--;
    }

    if (touche == 'd' || touche == 'D')
    {
        positions.player.X++;
    }
}

int Player::getX() const
{
    return positions.player.X;
}

int Player::getY() const
{
    return positions.player.Y;
}