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

void SDL::collisonCheck()
{
    for(int gx{}; gx < fullScreenX ; gx++)
    {
        for(int gy{}; gy < fullScreenY ; gy++)
        {
            
        }
    }
            
    //the next grid is put on the current one
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
                // idea: make it so that conwayLogic will return a intiger so that i know the type
                if(grid[gx][gy] == Type::player)
                {
                    renderDeath();
                }   
                if(grid[gx][gy] == dead)
                {
                    nextGrid[gx][gy] = alive;   
                }
                if(grid[gx][gy] == alive)
                {
                    nextGrid[gx][gy] = alive;   
                }
                if(grid[gx][gy] == monster)
                {
                    nextGrid[gx][gy] = monster;   
                }  
            }
        }
    }
    grid = nextGrid; 
}

void SDL::setGridCellState(int sx, int sy, int type)
{
    // make a x and y with offset
    int gx = sx + offsetX;
    int gy = sy + offsetY; 
    // set with offset
    grid[gx][gy] = type;
}

void SDL::PlayerLogic()
{
    if(grid[player.posX][player.posY] == alive)
    {
        renderDeath();
    }
    grid[player.posX][player.posY] = Type::player;
   SDL_SetRenderDrawColor(renderer, 55, 255, 90, 255);
   SDL_RenderDrawPoint(renderer, player.posX - offsetX, player.posY - offsetY);
}

//dellets offset, meaning it just draws with screen cordiantes               
void SDL::drawToScreen(int gx, int gy, int type)
{
    // make a x and y WITHOUT offset
    int sx = gx - offsetX;
    int sy = gy - offsetY;
    if(type == monster){SDL_SetRenderDrawColor(renderer, 255, 30, 30, 255);}
    if(type == alive){SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);}
    if(type == Type::player){SDL_SetRenderDrawColor(renderer, 55, 255, 90, 255);}
    if(type == Type::player){return;}
    SDL_RenderDrawPoint(renderer, sx, sy);
}




