#pragma once

#include "Entities.h"

class Ennemies : public Entities
{
public:
    Ennemies()
        : indexEnnemi(prochainIndexEnnemi++ % 5)
    {
        positions.ennemies[indexEnnemi] = { 0, 0 };
    }

    virtual void move(int PlayerX, int PlayerY) = 0;

    const V2D& getPosition() const
    {
        return positions.ennemies[indexEnnemi];
    }

    int life = 100;
    int power = 50;

protected:
    V2D& positionEnnemi()
    {
        return positions.ennemies[indexEnnemi];
    }

private:
    int indexEnnemi;
    inline static int prochainIndexEnnemi = 0;
};