#include "includes.h"
#include "sdl.h"

int main()
{
    //SDL INITALIZATION
    
    SDL SDL{}; 
   // SDL.quotes();

    SDL.spawnGlidersFromEdges();
    SDL.spawnSpaceshipsFromEdges();

    SDL.renderBackground();
    SDL.PlayerLogic();
    SDL_RenderPresent(SDL.renderer); 
    Mix_PlayChannel(-1, SDL.sound, 0); 
    SDL_Delay(1000);

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

        if(SDL.delay < SDL.frames)
        {
            SDL_SetRenderDrawColor(SDL.renderer, 255, 165, 0, 255);
            SDL_RenderDrawPoint(SDL.renderer, 3, 3);
            SDL_RenderDrawPoint(SDL.renderer, 4, 3);
            SDL_RenderDrawPoint(SDL.renderer, 5, 3);
        }

        SDL.displayGrid();
        SDL.timer();
        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
        SDL.frames++;

        if(SDL.remainingTime < 0) SDL.renderEndScreen(true);

    }
    return 0;
}
