#include "includes.h"

class initilizeSDL
{
    public:
    initilizeSDL(){Create();}
    
    private:
    uint32_t video[64 * 64] = {0};

    int Create()
    {   
        
        //Initializing STD Window
        //Creating a pointer to window struct in SDL
        //Creating a pointer to render struct in SDL
        
            SDL_Window* window = SDL_CreateWindow("CHIP-8 EMULATOR TEXT", 640, 320, 0); //window name, resolution, flag (fullscren exc...)
            SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);
            SDL_Texture* texture = SDL_CreateTexture(
            renderer,
            SDL_PIXELFORMAT_RGBA8888,
            SDL_TEXTUREACCESS_STREAMING,
            64, 32
            );
            SDL_SetTextureScaleMode(texture, SDL_SCALEMODE_NEAREST);
        
        if(SDL_Init(SDL_INIT_VIDEO) == false || (window == nullptr) || (renderer == nullptr) || (texture == nullptr))
            {
                SDL_Log("SDL Error: %s", SDL_GetError());
                return 1;
            }      

        //scales to pixel     

        video[100] = 0xFFFFFFFF;
        video[10] = 0xFFFFFF;
        
        bool running = true;
        while (running) {
            SDL_Event event;
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_EVENT_QUIT) {
                    running = false;
                }
            }
            SDL_UpdateTexture(texture, nullptr, video, 64 * sizeof(uint32_t));
            SDL_RenderClear(renderer);
            SDL_RenderTexture(renderer, texture, nullptr, nullptr);
            SDL_RenderPresent(renderer);
            }
    }
        public:
        void dot(int where)
        {   
            video[where] = 0xFF;
        }
 
};