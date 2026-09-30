#include "includes.h"
#include "add.cpp"

int main()
{
    SDL SDL{};
    


    while (SDL.running)
    {
        SDL.ifEvent();
        SDL.helloRender();
        SDL_Delay(5000);    
       // SDL.helloRender();    
    }
    return 0;
}