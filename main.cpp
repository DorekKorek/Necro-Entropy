#include "includes.h"
#include "sdl.h"

int main()
{
    //SDL INITALIZATION
    
    SDL SDL{}; 

    //SDL.quotes();

    int frames{0};

    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.PlayerLogic();
        SDL.ifEvent(frames);
        
        if(frames % 30 == 0)
        {
            
            SDL.updateCellState();
            
        }
        SDL.displayGrid();
        
        SDL.timer(frames);

        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
        frames++;
    }
    return 0;
}
