#include "sdl.h"

void SDL::timer()
{
    //if(remainingTime <= 0){return;}
    int ones = remainingTime % 10;
    int tens = (remainingTime - ones) / 10;

    if (frames % 60 == 0)
    {
        remainingTime--;
        if(remainingTime <= 5)
        {
            Mix_PlayChannel(-1, sound, 0);
        }
    }

    if(tens > 0)
    {
        drawNumber(tens, middleX-2, 7);
    }
    drawNumber(ones, middleX+2, 7);
    

}