#include "sdl.h"

void SDL::gliderGunRightDown(int x, int y)
{
    // Współrzędne Gosper Glider Gun strzelającego w prawo-dół (36 komórek)
    const int offsets[][2] = {
        // Lewy kwadrat (2x2 blok)
        {0, 4}, {1, 4},
        {0, 5}, {1, 5},

        // Lewa struktura
        {10, 4}, {10, 5}, {10, 6},
        {11, 3}, {11, 7},
        {12, 2}, {13, 2},
        {12, 8}, {13, 8},
        {14, 5},
        {15, 3}, {15, 7},
        {16, 4}, {16, 5}, {16, 6},
        {17, 5},

        // Środkowa struktura
        {20, 2}, {21, 2},
        {20, 3}, {21, 3},
        {20, 4}, {21, 4},
        {22, 1}, {22, 5},
        {24, 0}, {24, 1},
        {24, 5}, {24, 6},

        // Prawy kwadrat (2x2 blok)
        {34, 2}, {35, 2},
        {34, 3}, {35, 3}
    };

    for (const auto& offset : offsets)
    {
        drawLife(x + offset[0], y + offset[1]);
    }
}

void SDL::gliderGunLeftDown(int x, int y)
{
    // Współrzędne Gosper Glider Gun strzelającego w lewo-dół (36 komórek)
    const int offsets[][2] = {
        // Lewy kwadrat (2x2 blok)
        {0, 2}, {1, 2},
        {0, 3}, {1, 3},

        // Lewa struktura
        {11, 0}, {11, 1},
        {11, 5}, {11, 6},
        {13, 1}, {13, 5},
        {14, 2}, {14, 3}, {14, 4},
        {15, 2}, {15, 3}, {15, 4},

        // Środkowa struktura
        {18, 5},
        {19, 4}, {19, 5}, {19, 6},
        {20, 3}, {20, 7},
        {21, 5},
        {22, 2}, {22, 8},
        {23, 2}, {23, 8},
        {24, 3}, {24, 7},
        {25, 4}, {25, 5}, {25, 6},

        // Prawy kwadrat (2x2 blok)
        {34, 4}, {35, 4},
        {34, 5}, {35, 5}
    };

    for (const auto& offset : offsets)
    {
        drawLife(x + offset[0], y + offset[1]);
    }
}

