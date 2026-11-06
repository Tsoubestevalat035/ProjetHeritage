#pragma once

#include <string>

class Ennemies;

class Map
{
public:
    static constexpr int NBLIGNES = 10;
    static constexpr int NBCOLONNES = 20;
    static constexpr int NBCASES = NBLIGNES * NBCOLONNES;

    void creationcarte(
        int joueurX,
        int joueurY,
        Ennemies* ennemis[],
        int nombreEnnemis
    ) const;

private:
    std::string indexbloque[3] = { " . ", "AAA", "~~~" };

    int carte[NBCASES]
    {
        0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2,
        0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2,
        0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
        0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
        2, 2, 0, 2, 2, 2, 2, 1, 0, 1, 2, 2, 0, 2, 2, 2, 2, 2, 0, 2,
        2, 2, 0, 2, 2, 2, 1, 1, 1, 1, 2, 2, 0, 2, 2, 2, 2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0
    };
};