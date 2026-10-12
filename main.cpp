#include "headers/includes.h"
#include "headers/sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};
    SDL_Delay(500);

    //SDL.renderHello();
    Mix_PlayChannel(-1, SDL.sound, 0);

    
    
    SDL.drawLife(50, 60);
    SDL.drawLife(51, 60);
    SDL.drawLife(50, 61);
    SDL.drawLife(51, 61);
    
    SDL.gliderGun(15, 15);

    long long framecount{};
    
    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.ifEvent();
        
        
        
        SDL.renderPlayer(SDL.player.posX, SDL.player.posY);


        if(framecount % 3 == 0)
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
