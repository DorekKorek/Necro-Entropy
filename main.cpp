#include "headers/includes.h"
#include "headers/sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};
    SDL_Delay(500);

    Mix_PlayChannel(-1, SDL.sound, 0);

    
    
 int i = 20; 

    SDL.gliderGunRightDown(34 - i, 10 - i);
    SDL.gliderGunRightDown(0- i, 0 - i );
    SDL.gliderGunRightDown(-34 - i, -10 - i );
    SDL.gliderGunRightDown(-34 *2 - i, -10 *2 - i );

    SDL.gliderGunLeftDown(86, 10 - i);
    SDL.gliderGunLeftDown(110, 20 - i);
    SDL.gliderGunLeftDown(52, 0 - i);

    long long framecount{};
    
    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.ifEvent();
        
        //SDL.renderPlayer(SDL.player.posX, SDL.player.posY);

        SDL.Democritus(12, 10);

        if(framecount % 2 == 0)
        {
         //   SDL.ruleLife();
        }
            SDL.setLifeAndDraw();

        framecount++;


        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
    }
    return 0;
}
