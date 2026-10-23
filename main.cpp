#include "includes.h"
#include "sdl.h"

int main()
{
    //SDL INITALIZATION
    
    SDL SDL{}; 

    //SDL.quotes();

    int frames{1};
    int clockTime{60};

    int x{+ 50};
    int y{- 80};
    SDL.gliderGunLeftDown(20 + x, 20 + y);
    SDL.gliderGunLeftDown(35 + x, 32 + y);
    SDL.gliderGunLeftDown(50 + x, 44 + y);
    SDL.gliderGunLeftDown(65 + x, 56 + y);
    SDL.gliderGunLeftDown(80 + x, 68 + y);
    SDL.gliderGunLeftDown(95 + x, 80 + y);



    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.timer(frames, clockTime);
      //  SDL.PlayerLogic();
        SDL.ifEvent(frames);
        if(frames % 2 == 0)
        {
            SDL.updateCellState();
        }
        if(frames % 1000 == 0)
        {     

        }
        SDL.displayGrid();
        

        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
        frames++;
        if(clockTime < 0){SDL.renderEndScreen(true);}
    }
    return 0;
}
