#pragma once

class Entities
{
public:
    struct V2D
    {
        int X = 0;
        int Y = 0;
    };

    struct entitées
    {
        V2D ennemies[5];
        V2D Player;
    };

protected:
    inline static entitées positions{};
};