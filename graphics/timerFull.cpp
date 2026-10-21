#include "sdl.h"

void timer()
{
    static int time{};

    SDL::drawNumber(time, 30, 10);

}