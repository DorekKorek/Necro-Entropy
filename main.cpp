
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <cstdio>
#include <string>

int main()
{
    
    //Initializing STD Window
    {
    SDL_Init(SDL_INIT_VIDEO); //Function to set up sdl 
        if(SDL_Init(SDL_INIT_VIDEO) == false){
            SDL_Log("SDL could not initilize the video: ", SDL_GetError());
            return 1;
        }
    }   
    
    //Creating a pointer to window struct in SDL((

    SDL_Window* window = SDL_CreateWindow("CHIP-8 EMULATOR TEXT", 640, 320, 0); //window name, resolution, flag (fullscren exc...)
    
    if (window == nullptr){
        SDL_Log("window cration failed: ", SDL_GetError());
        return 1;
    }
}