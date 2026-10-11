#include "includes.h"
#include "sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};
    SDL_Delay(200);

    //SDL.renderHello();
    Mix_PlayChannel(-1, SDL.sound, 0);

    SDL.renderBackground();
    for(int i{}; i < 40; i ++)
    {
    SDL.drawLife(SDL.middleX-20 +i, SDL.middleY);
    }
    SDL_RenderPresent(SDL.renderer);
    SDL_Delay(1000);

    long long framecount{};

    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.ifEvent();
        SDL.renderPlayer(SDL.player.posX, SDL.player.posY);

        if(framecount % 20 == 0)
        {
            SDL.ruleLife();
        }
            SDL.renderLife();

        framecount++;

        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
    }
    return 0;
}