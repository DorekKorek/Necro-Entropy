/*Conway's Game of Life is a zero-player cellular automaton where the evolution of a grid of cells is determined by four simple rules applied simultaneously to every cell based onLife its eight neighbors:

Underpopulation: Any live cell with fewer than two live neighbors dies. 
Survival: Any live cell with two or three live neighbors lives onLife to the next generation. 
Overpopulation: Any live cell with more than three live neighbors dies. 
Reproduction: Any dead cell with exactly three live neighbors becomes a live cell. 
These rules are collectively known as B3/S23, meaning a dead cell is born with 3 neighbors and a live cell survives with 2 or 3 neighbors. */

// x = neighbors
// x < 2 dead
// x == 2 || x == 3 lives
// x == 3 begins living
// x > 3 dead

#include "headers/sdl.h"


    //dla kazdego miesjaa w grid sprawdza funkcja rules of life
    void SDL::ruleLife()
        {
            
            for(int indexX{2}; indexX < hiddenScreenWidth -2; indexX++)
            {
                for(int indexY{2}; indexY < hiddenScreenHeight-2; indexY++)
                {
                    rulesOfLife(indexX, indexY);
                }
            }
            
        }
    // conway rules, sets new grid using conway rules 
    void SDL::rulesOfLife(int x, int y)
    {
    
            int neighbors {countNeighbors(x, y)};
            
            if(neighbors < 2 || neighbors > 3)
            {
                    nextGrid[x][y] = offLife;
                    return;
                }
                else if((neighbors == 3) || (neighbors == 2 && grid[x][y] == onLife))
                {
                    nextGrid[x][y] = onLife;
                }
                
            }
    // counts neighbors
    int SDL::countNeighbors(int x, int y)
        {   
                int neighbors{};
                neighbors += grid[x + 1][y] == onLife ? onLife : offLife;
                neighbors += grid[x - 1][y] == onLife ? onLife : offLife;
                neighbors += grid[x][y + 1] == onLife ? onLife : offLife;
                neighbors += grid[x][y - 1] == onLife ? onLife : offLife;
                neighbors += grid[x - 1][y - 1] == onLife ? onLife : offLife;
                neighbors += grid[x - 1][y + 1] == onLife ? onLife : offLife;
                neighbors += grid[x + 1][y - 1] == onLife ? onLife : offLife;
                neighbors += grid[x + 1][y + 1] == onLife ? onLife : offLife;
                return neighbors;
        }
    
    void SDL::setLifeAndDraw()
    {
        //sets a new frame onto the main frame 
        //and redners death if collison
        //if (skipGridSet == 0)
        {
            for(int indexX{2}; indexX < hiddenScreenWidth ; indexX++)
            {
                for(int indexY{2}; indexY < hiddenScreenHeight; indexY++)
                {
                    if((nextGrid[indexX][indexY] == onPlayer) && grid[indexX][indexY] == onLife)
                    {
                        renderDeath();
                    }
                    grid[indexX][indexY] = nextGrid[indexX][indexY];   
                }
            }
        }

        drawLife();
    }

    void SDL::drawLife()
    {
        //draws the new frame onto the screen
        for(int x{}; x < screenWidth ; x++)
        {
            for(int y{}; y < screenHeight; y++)
            {
                
                // goes thru the whole window and draw onto the frame wwith an offset
                if(grid[x + offsetWidth][y + offsetHeight] == onLife)
                {
                    SDL_SetRenderDrawColor(renderer, 255,255,255,255);
                    SDL_RenderDrawPoint(renderer, x, y);
                }
                
            }
        }
    }


            
    
                
    void SDL::drawLife(int x, int y)
            {
            int gx = x + offsetWidth;
            int gy = y + offsetHeight;
    
            
            SDL_SetRenderDrawColor(renderer, 255,255,255,255);
            SDL_RenderDrawPoint(renderer, x, y);
            if (gx >= 0 && gx < hiddenScreenWidth && gy >= 0 && gy < hiddenScreenHeight)           
                {
                    grid[gx][gy] = onLife;
                }
                //grid[x][y] = onLife;
        
            }  

    void SDL::renderPlayer(int x, int y)
            {
                SDL_SetRenderDrawColor(renderer, 0,128,0,1);
                SDL_RenderDrawPoint(renderer, x, y);
                nextGrid[x + offsetWidth][y + offsetHeight] = onPlayer;
        
            }
                
                