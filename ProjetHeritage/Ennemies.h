#pragma once

#include "Entities.h"

class Ennemies : public Entities
{
protected:
    int indexEnnemi;

    V2D& position()
    {
        return positions.ennemies[indexEnnemi];
    }

public:
    Ennemies(int index, int x, int y)
        : indexEnnemi(index)
    {
        positions.ennemies[indexEnnemi] = { x, y };
    }

    virtual ~Ennemies() = default;

    virtual void move(int joueurX, int joueurY) = 0;

    const V2D& getPosition() const
    {
        return positions.ennemies[indexEnnemi];
    }

    int getX() const
    {
        return getPosition().X;
    }

    int getY() const
    {
        return getPosition().Y;
    }

    int life = 100;
    int power = 50;
};