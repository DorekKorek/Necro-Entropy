#include "sdl.h"


void SDL::drawOnScreen(int x, int y)
{
    // make a x and y with and offset
    int gx = x + offsetX;
    int gy = y + offsetY; 

    // draw without offset
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawPoint(renderer, x, y);

    // set with offset
    grid[gx][gy] = alive;
    
}

void SDL::gridRender()
{
    for(int x{1}; x < fullScreenX; x++)
    {
        for(int y{1}; y < fullScreenY; y++)
        {
            // make an x and y witout the offset
            int sx = x - offsetX;
            int sy = y - offsetY; 

            if(grid[x][y] == alive)
            {
                // draw without offset
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                SDL_RenderDrawPoint(renderer, sx, sy);
                // set with offset
                grid[x][y] = alive;
    
            }
        }
    }
}


