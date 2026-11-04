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
    Ennemies(int index)
    {
        indexEnnemi = index;
        positions.ennemies[indexEnnemi] = { 0, 0 };
    }

    virtual void move(int joueurX, int joueurY) = 0;

    const V2D& getPosition() const
    {
        return positions.ennemies[indexEnnemi];
    }
    int life = 100;
    int power = 50;
};