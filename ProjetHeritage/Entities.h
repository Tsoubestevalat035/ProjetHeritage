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
        V2D ennemies[5]{};
        V2D Player{};
    };

protected:
    // Structure partagée par le joueur et les ennemis
    inline static entitées positions{};
};