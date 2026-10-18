#include "includes.h"
#include "sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};

    Mix_PlayChannel(-1, SDL.sound, 0);
    
    
    SDL.drawOnScreen(30, 30);
    SDL.drawOnScreen(30, 31);
    SDL.drawOnScreen(31, 30);
    SDL.drawOnScreen(31, 31);
    
    
    SDL.drawOnScreen(1, 5);
    SDL.drawOnScreen(1, 6);
    SDL.drawOnScreen(1, 7);
    SDL.drawOnScreen(1, 8);
    SDL.drawOnScreen(1, 10);
    SDL.drawOnScreen(1, 11);
    SDL.drawOnScreen(1, 12);
    SDL.drawOnScreen(1, 13);
    SDL.drawOnScreen(1, 14);




    SDL.drawOnScreen(32, 32);
    SDL.drawOnScreen(32, 33);
    SDL.drawOnScreen(33, 32);
    SDL.drawOnScreen(33, 33);
    SDL.drawOnScreen(-5, -5);

    int frames{0};

    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.ifEvent();
        
        SDL.gridRender();

        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
        frames++;
    }
    return 0;
}
