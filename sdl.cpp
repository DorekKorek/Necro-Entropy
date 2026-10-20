#include "sdl.h"

    SDL::SDL()
    {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    SDL_CreateWindowAndRenderer(screenX * scale, screenY * scale, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, scale, scale);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);
    SDL::sound = Mix_LoadWAV("sounds/sound.mp3");
    SDL::deathSound = Mix_LoadWAV("sounds/death.mp3");
    SDL::soundLong = Mix_LoadWAV("sounds/soundLong.mp3");
    player.posX = SDL::middleX + SDL::offsetX;
    player.posY = SDL::middleY + SDL::offsetY;
    
    //player.posX = SDL::middleX;
    //player.posY = SDL::middleY;
    }

    void SDL::Quit()
    {
        running = false;

        if(sound != nullptr)
        {
            Mix_FreeChunk(sound);
            sound = nullptr;
        }
        if(deathSound != nullptr)
        {
            Mix_FreeChunk(deathSound);
            deathSound = nullptr;
        }
        Mix_CloseAudio();
        Mix_Quit();

        if(renderer != nullptr)
        {
            SDL_DestroyRenderer(renderer);
            renderer = nullptr;
        }
        if(window != nullptr)
        {
            SDL_DestroyWindow(window);
            window = nullptr;
        }

        SDL_Quit();
        
    }

    void SDL::ifEvent(int frames)
    {
        SDL_Event event;

         while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                Quit();
            }
        }

       // if (event.type == SDL_KEYDOWN)
            {  
            //    if (event.key.repeat == 0 && SDL::player.posX)
                if(frames % 2 == 0)
                {
                        const Uint8* state = SDL_GetKeyboardState(nullptr);

                        if(state[SDL_SCANCODE_RIGHT]) 
                        {
                            //std::cerr << "key RIGHT pressed" << std::endl;
                            //if(SDL::player.posX < screenX -2)
                            {SDL::player.posX ++;}
                            
                        }
                        if(state[SDL_SCANCODE_LEFT]) 
                        {
                            //std::cerr << "key LEFT pressed" << std::endl;
                            //if(SDL::player.posX > 2)
                            {SDL::player.posX --;}
                         
                        }
                        if(state[SDL_SCANCODE_UP]) 
                        {
                            //std::cerr << "key UP pressed" << std::endl;
                            //if(SDL::player.posY > 2)
                            SDL::player.posY -- ;
                         
                        }
                        if(state[SDL_SCANCODE_DOWN]) 
                        {
                            //std::cerr << "key DOWN pressed" << std::endl;
                            //if(SDL::player.posY < screenY -2)
                            SDL::player.posY ++ ;
                         
                        }
                }
            }
    }
    
       
    void SDL::renderBackground()
    {
        SDL_SetRenderDrawColor(renderer, 0,0,0, 255);
        SDL_RenderClear(renderer);
    }