#include "includes.h"
#include "sdl.h"

int main()
{
    //SDL INITALIZATION
    
    SDL SDL{}; 

    //SDL.quotes();

    SDL.spawnGlidersFromEdges();
    SDL.spawnSpaceshipsFromEdges();

    while (SDL.running)
    {
        SDL.renderBackground();
        if(SDL.frames % 45 == 0)
        {
            SDL.spawnGlidersFromEdges();
            SDL.spawnSpaceshipsFromEdges();
        }
        
        if(SDL.frames % 2 == 0)
        {
            SDL.updateCellState();
        }

        SDL.ifEvent();
        SDL.PlayerLogic();
        SDL.displayGrid();
        
        SDL.timer();

        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
        SDL.frames++;
    }
    return 0;
}
