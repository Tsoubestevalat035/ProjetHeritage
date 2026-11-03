#pragma once

class Ennemies
{
public:
    virtual ~Ennemies() = default;

    virtual void move(int PlayerX, int PlayerY) = 0;

    int X = 0;
    int Y = 0;

    int life = 100;
    int power = 50;
};