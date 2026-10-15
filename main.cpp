#include "headers/includes.h"
#include "headers/sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};

    Mix_PlayChannel(-1, SDL.sound, 0);

    
    
 int i = 20; 
 
 SDL.gliderGunRightDown(34 - i, 10 - i);
 SDL.gliderGunRightDown(0- i, 0 - i );
 SDL.gliderGunRightDown(-34 - i, -10 - i );
 SDL.gliderGunRightDown(-34 *2 - i, -10 *2 - i );
 
 SDL.gliderGunLeftDown(86, 10 - i);
 SDL.gliderGunLeftDown(110, 20 - i);
 SDL.gliderGunLeftDown(52, 0 - i);
    
    SDL.quoteDemocritus(12, 10);

    long long framecount{};
    
    SDL.renderBackground();
    SDL.renderPlayer(SDL.player.posX, SDL.player.posY);
    Mix_PlayChannel(-1, SDL.sound, 0);
    SDL_RenderPresent(SDL.renderer);
    SDL_Delay(2000);
    
    
    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.ifEvent();
        
        SDL.renderPlayer(SDL.player.posX, SDL.player.posY);


        if(framecount % 2 == 0)
        {
            SDL.ruleLife();
        }
            SDL.setLifeAndDraw();

        framecount++;


        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
    }
    return 0;
}
