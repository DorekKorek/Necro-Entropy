#include "sdl.h"

void SDL::spawnGlidersFromEdges()
{
    constexpr int offset{8}; // Increase this to spawn further out

    constexpr int topLeftX{2 - offset};
    constexpr int topLeftY{2 - offset};
    constexpr int topRightX{screenX - 4 + offset};
    constexpr int topRightY{3 - offset};
    constexpr int bottomLeftX{3 - offset};
    constexpr int bottomLeftY{screenY - 4 + offset};
    constexpr int bottomRightX{screenX - 5 + offset};
    constexpr int bottomRightY{screenY - 6 + offset};

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
    constexpr int offset{12}; // Increase this to spawn further out

    constexpr int leftX{1 - offset};
    constexpr int leftY{middleY + 2};
    constexpr int rightX{screenX - 5 + offset};
    constexpr int rightY{middleY - 1};
    constexpr int topX{middleX - 2};
    constexpr int topY{1 - offset};
    constexpr int bottomX{middleX + 1};
    constexpr int bottomY{screenY - 5 + offset};

    // left spaceship (moving right)
    setGridCellState(leftX + 1, leftY, alive);
    setGridCellState(leftX + 2, leftY, alive);
    setGridCellState(leftX + 3, leftY, alive);
    setGridCellState(leftX + 4, leftY, alive);
    setGridCellState(leftX, leftY + 1, alive);
    setGridCellState(leftX + 4, leftY + 1, alive);
    setGridCellState(leftX + 4, leftY + 2, alive);
    setGridCellState(leftX, leftY + 3, alive);
    setGridCellState(leftX + 3, leftY + 3, alive);

    // right spaceship (moving left)
    setGridCellState(rightX, rightY, alive);
    setGridCellState(rightX + 1, rightY, alive);
    setGridCellState(rightX + 2, rightY, alive);
    setGridCellState(rightX + 3, rightY, alive);
    setGridCellState(rightX, rightY + 1, alive);
    setGridCellState(rightX + 4, rightY + 1, alive);
    setGridCellState(rightX, rightY + 2, alive);
    setGridCellState(rightX + 1, rightY + 3, alive);
    setGridCellState(rightX + 4, rightY + 3, alive);

    // top spaceship (moving down)
    setGridCellState(topX + 1, topY, alive);
    setGridCellState(topX + 3, topY, alive);
    setGridCellState(topX, topY + 1, alive);
    setGridCellState(topX, topY + 2, alive);
    setGridCellState(topX, topY + 3, alive);
    setGridCellState(topX + 3, topY + 3, alive);
    setGridCellState(topX, topY + 4, alive);
    setGridCellState(topX + 1, topY + 4, alive);
    setGridCellState(topX + 2, topY + 4, alive);

    // bottom spaceship (moving up)
    setGridCellState(bottomX + 1, bottomY, alive);
    setGridCellState(bottomX + 2, bottomY, alive);
    setGridCellState(bottomX + 3, bottomY, alive);
    setGridCellState(bottomX, bottomY + 1, alive);
    setGridCellState(bottomX + 3, bottomY + 1, alive);
    setGridCellState(bottomX + 3, bottomY + 2, alive);
    setGridCellState(bottomX + 3, bottomY + 3, alive);
    setGridCellState(bottomX, bottomY + 4, alive);
    setGridCellState(bottomX + 2, bottomY + 4, alive);
}