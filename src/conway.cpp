#include "sdl.h"

int SDL::conwayLogic(int x, int y)
{
    int neighbors {countNeighbors(x, y)};
    
    if(neighbors < 2 || neighbors > 3)
    {
        return dead;
    }
    else if((neighbors == 3) || (neighbors == 2 && grid[x][y] >= alive))
    {
        return alive;
    }          
    return dead;  
}

int SDL::countNeighbors(int x, int y)
{
    // goes around the pixel and counts how many "neighbors" alive
    // returns the number
    int neighbors{};
    for(int nx = -1; nx <= 1; nx++ )
    {
        for(int ny = -1; ny <= 1; ny++ )
        {
                int gx = x + nx;
                int gy = y + ny;
            //  if makes sure the check wont go out of bounds
            if((gx > 0 && gy > 0) && gx < fullScreenX-1 && gy < fullScreenY-1 )
            {
                if((grid[gx][gy] == (alive)) && !(nx == 0 && ny == 0))
                {
                    neighbors++;
                }
            }
        }
    }

    return neighbors;
}


