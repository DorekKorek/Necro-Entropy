#include "sdl.h"

void SDL::renderDeath()
    {

        Mix_PlayChannel(-1, deathSound, 0);
        int moveUp{10};
        while(true)
        {
            
            SDL_Delay(1000);
            renderBackground();
           for(int indexX{}; indexX < width ; indexX++)
           {
               for(int indexY{}; indexY < height; indexY++)
               {    
                   grid[indexX][indexY] = grid[indexX][indexY + moveUp];    
                }
            }
            renderLife(1);
            SDL_RenderPresent(renderer);
            Mix_PlayChannel(-1, sound, 0);
           moveUp+= 10;
           if (moveUp == 60){break;}
        }

        Quit();
            
        
    }