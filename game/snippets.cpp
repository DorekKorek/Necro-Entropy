#include "sdl.h"


void SDL::setGridCellState(int sx, int sy, int type)
{
    // make a x and y with offset
    int gx = sx + offsetX;
    int gy = sy + offsetY; 
    // set with offset
    grid[gx][gy] = type;
}

//dellets offset, meaning it just draws with screen cordiantes               
void SDL::drawToScreen(int gx, int gy, int type)
{
    // make a x and y WITHOUT offset
    int sx = gx - offsetX;
    int sy = gy - offsetY;
    if(type == monster){SDL_SetRenderDrawColor(renderer, 255, 30, 30, 255);}
    if(type == alive){SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);}
    SDL_RenderDrawPoint(renderer, sx, sy);
}
