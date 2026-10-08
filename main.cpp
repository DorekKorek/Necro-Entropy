#include "includes.h"
#include "sdl.h"

int main()
{
    SDL SDL{};

    SDL_Delay(800);
    //SDL.renderHello();
    Mix_PlayChannel(-1, SDL.sound, 0);
    
    SDL.renderBackground();
    for(int i{}; i < 10; i ++)
    {
    SDL.renderLife(SDL.middleX +i, SDL.middleY);
    }
    SDL_RenderPresent(SDL.renderer);
    SDL_Delay(1160);

    while (SDL.running)
    {
        SDL.ifEvent();
        SDL.renderBackground();
        //SDL.renderPlayer(SDL.player.posX, SDL.player.posY);
        SDL.gameLoop();
        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(1160);

    }
    return 0;
}