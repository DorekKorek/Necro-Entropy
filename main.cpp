#include "includes.h"
#include "sdl.h"

int main()
{
    SDL SDL{};

    SDL_Delay(800);
    //SDL.renderHello();
    Mix_PlayChannel(-1, SDL.sound, 0);

    SDL.renderBackground();
    for(int i{}; i < 40; i ++)
    {
    SDL.renderLife(SDL.middleX-20 +i, SDL.middleY);
    }
    SDL_RenderPresent(SDL.renderer);
    SDL_Delay(1000);

    while (SDL.running)
    {
        SDL.ifEvent();
        SDL.renderBackground();
        SDL.renderPlayer(SDL.player.posX, SDL.player.posY+5);
        SDL.gameLoop();
        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
    }
    return 0;
}