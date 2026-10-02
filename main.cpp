#include "includes.h"
#include "sdl.h"

int main()
{
    SDL SDL{};

    SDL_Delay(800);
    SDL.renderHello();

    while (SDL.running)
    {
        SDL.renderBackground();

        SDL.ifEvent();
        SDL.renderPlayer(SDL.player.posX, SDL.player.posY);
        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
        

    }
    return 0;
}