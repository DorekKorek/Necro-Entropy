#include "sdl.h"

void SDL::timer(int frames)
{
    static int time{60};
    if(time <= 0){return;}
     
    int ones = time % 10;
    int tens = (time - ones) / 10;

    if (frames % 60 == 0)
    {
        time--;
        if(time <= 5)
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