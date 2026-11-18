#include "sdl.h"

void SDL::spawnGlidersFromEdges()
{
    constexpr int topLeftX{2};
    constexpr int topLeftY{2};
    constexpr int topRightX{screenX - 4};
    constexpr int topRightY{3};
    constexpr int bottomLeftX{3};
    constexpr int bottomLeftY{screenY - 4};
    constexpr int bottomRightX{screenX - 5};
    constexpr int bottomRightY{screenY - 6};

    // top-left glider
    setGridCellState(topLeftX + 1, topLeftY, alive);
    setGridCellState(topLeftX + 2, topLeftY + 1, alive);
    setGridCellState(topLeftX, topLeftY + 2, alive);
    setGridCellState(topLeftX + 1, topLeftY + 2, alive);
    setGridCellState(topLeftX + 2, topLeftY + 2, alive);

    // top-right glider
    setGridCellState(topRightX + 1, topRightY, alive);
    setGridCellState(topRightX, topRightY + 1, alive);
    setGridCellState(topRightX, topRightY + 2, alive);
    setGridCellState(topRightX + 1, topRightY + 2, alive);
    setGridCellState(topRightX + 2, topRightY + 2, alive);

    // bottom-left glider
    setGridCellState(bottomLeftX, bottomLeftY, alive);
    setGridCellState(bottomLeftX + 1, bottomLeftY, alive);
    setGridCellState(bottomLeftX + 2, bottomLeftY, alive);
    setGridCellState(bottomLeftX + 2, bottomLeftY + 1, alive);
    setGridCellState(bottomLeftX + 1, bottomLeftY + 2, alive);

    // bottom-right glider
    setGridCellState(bottomRightX, bottomRightY, alive);
    setGridCellState(bottomRightX + 1, bottomRightY, alive);
    setGridCellState(bottomRightX + 2, bottomRightY, alive);
    setGridCellState(bottomRightX, bottomRightY + 1, alive);
    setGridCellState(bottomRightX + 1, bottomRightY + 2, alive);
}

void SDL::spawnSpaceshipsFromEdges()
{
    constexpr std::array<std::array<int, 2>, 9> movingRight{{
        {1, 0}, {2, 0}, {3, 0}, {4, 0}, {0, 1},
        {4, 1}, {4, 2}, {0, 3}, {3, 3}
    }};
    constexpr std::array<std::array<int, 2>, 9> movingLeft{{
        {0, 0}, {1, 0}, {2, 0}, {3, 0}, {0, 1},
        {4, 1}, {0, 2}, {1, 3}, {4, 3}
    }};
    constexpr std::array<std::array<int, 2>, 9> movingDown{{
        {1, 0}, {3, 0}, {0, 1}, {0, 2}, {0, 3},
        {3, 3}, {0, 4}, {1, 4}, {2, 4}
    }};
    constexpr std::array<std::array<int, 2>, 9> movingUp{{
        {1, 0}, {2, 0}, {3, 0}, {0, 1}, {3, 1},
        {3, 2}, {3, 3}, {0, 4}, {2, 4}
    }};

    const auto placeSpaceship = [this](
        int x,
        int y,
        const std::array<std::array<int, 2>, 9>& cells
    ) {
        for (const auto& cell : cells)
        {
            setGridCellState(x + cell[0], y + cell[1], alive);
        }
    };

    placeSpaceship(1, middleY + 2, movingRight);
    placeSpaceship(screenX - 5, middleY - 1, movingLeft);
    placeSpaceship(middleX - 2, 1, movingDown);
    placeSpaceship(middleX + 1, screenY - 5, movingUp);
}