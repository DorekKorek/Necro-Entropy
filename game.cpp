/*Conway's Game of Life is a zero-player cellular automaton where the evolution of a grid of cells is determined by four simple rules applied simultaneously to every cell based on its eight neighbors:

Underpopulation: Any live cell with fewer than two live neighbors dies. 
Survival: Any live cell with two or three live neighbors lives on to the next generation. 
Overpopulation: Any live cell with more than three live neighbors dies. 
Reproduction: Any dead cell with exactly three live neighbors becomes a live cell. 
These rules are collectively known as B3/S23, meaning a dead cell is born with 3 neighbors and a live cell survives with 2 or 3 neighbors. */

// x = neighbors
// x < 2 dead
// x == 2 || x == 3 lives
// x == 3 begins living
// x > 3 dead


#include "sdl.h"



void SDL::gameLoop()
    {

        for(int indexX{2}; indexX < width -2; indexX++)
        {
            for(int indexY{2}; indexY < height-2; indexY++)
            {
                rulesOfLife(indexX, indexY);
            }
        }

       for(int indexX{}; indexX < width ; indexX++)
        {
            for(int indexY{}; indexY < height; indexY++)
            {
                {
                grid[indexX][indexY] = nextGrid[indexX][indexY];
                }

            }

        }



    }


void SDL::renderLife(int x, int y)
    {
        SDL_SetRenderDrawColor(renderer, 255,255,255,255);
        SDL_RenderDrawPoint(renderer, x, y);
        grid[x][y] = on;

    }    

void SDL::renderPlayer(int x, int y)
    {
        SDL_SetRenderDrawColor(renderer, 98,4,255,1);
        SDL_RenderDrawPoint(renderer, x, y);
        grid[x][y] = playerOn;

    }

    int SDL::countNeighbors(int x, int y)
        {   
            int neighbors{};
            neighbors += grid[x + 1][y];
            neighbors += grid[x - 1][y];
            neighbors += grid[x][y + 1];
            neighbors += grid[x][y - 1];
            neighbors += grid[x - 1][y - 1];
            neighbors += grid[x - 1][y + 1];
            neighbors += grid[x + 1][y - 1];
            neighbors += grid[x + 1][y + 1];
            return neighbors;
        }
            
void SDL::rulesOfLife(int x, int y)
    {
    // (x = neighbors)
    // x < 2 dead
    // x == 2 || x == 3 lives
    // x == 3 begins living
    // x > 3 dead

    int neighbors {countNeighbors(x, y)};
        {
            if(neighbors < 2 || neighbors > 3)
            {
                nextGrid[x][y] = off;
                return;
            }
            else if((neighbors == 3) || (neighbors == 2 && grid[x][y] == on))
            {
                SDL_SetRenderDrawColor(renderer, 255,255,255,255);
                nextGrid[x][y] = on;
            }
        }
        SDL_RenderDrawPoint(renderer, x, y);
    }


