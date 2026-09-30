#include "includes.h"
#include "add.h"

int main()
{
    SDL SDL{};
    while (SDL.running)
    {
        SDL.ifEvent();
        SDL.renderHello();
        SDL.Quit();
    }
    return 0;
}