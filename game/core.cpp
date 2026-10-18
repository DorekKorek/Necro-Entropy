#include "sdl.h"


void SDL::displayGrid()
{
    for(int gx{}; gx < fullScreenX; gx++)
    {
        for(int gy{}; gy < fullScreenY; gy++)
        {
            if(grid[gx][gy] == alive)
            {
                drawToScreen(gx, gy, alive);
            }
            if(grid[gx][gy] == monster)
            {
                drawToScreen(gx, gy, monster);
            }
        }
    }
}

void SDL::updateCellState()
{
    std::array<std::array<int, fullScreenY>, fullScreenX> nextGrid{};
    
    for(int gx{}; gx < fullScreenX ; gx++)
    {
        for(int gy{}; gy < fullScreenY ; gy++)
        {
            if(conwayLogic(gx, gy))
            {
                if(grid[gx][gy] == alive)
                {
                    nextGrid[gx][gy] = alive;   
                }
                if(grid[gx][gy] == monster)
                {
                    nextGrid[gx][gy] = monster;   
                }
                nextGrid[gx][gy] = alive;       
            }
        }
    }


    grid = nextGrid;
}


