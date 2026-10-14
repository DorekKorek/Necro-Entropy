#include "headers/includes.h"
#include "headers/sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};
    SDL_Delay(500);

    //SDL.renderHello();
    Mix_PlayChannel(-1, SDL.sound, 0);

    
    
    //SDL.drawLife(SDL.middleX, SDL.middleY);
 int i = 20; 

    SDL.gliderGun(34 - i, 10 - i);
    SDL.gliderGun(0- i, 0 - i );
    SDL.gliderGun(-34 - i, -10 - i );
    SDL.gliderGun(-34 *2 - i, -10 *2 - i );

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
