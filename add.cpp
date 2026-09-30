    #include "add.h"

    SDL::SDL()
    {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    SDL_CreateWindowAndRenderer(width * scale, height * scale, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, scale, scale);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);
    SDL::sound = Mix_LoadWAV("sound.mp3");
    }

    void SDL::Quit()
    {
        running = false;
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        SDL_Quit();
        
    }

    void SDL::ifEvent()
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                Quit();
            }
        }
        
    }
    
    void SDL::renderHello()
    {
        int delayTime = 1000;
        int middleX = width/2;
        int middleY = height/2;
        
        for(int i{}; i <15 *3; i = i + 3)
        {
            renderBackground();
            // LETTER "H"
            renderLineY(middleX -25, middleY+ 5+i, 14);
            renderLineX(middleX -24, middleY- 2+i, 7);
            renderLineY(middleX -17, middleY+ 5+i, 14);
            // LETTER "E"
            renderLineY(middleX -13, middleY+ 5+i, 14);
            renderLineX(middleX -13, middleY-9+i, 5);
            renderLineX(middleX -13, middleY-2+i, 5);
            renderLineX(middleX -13, middleY+5+i, 5);
            // LETTER "L"
            renderLineY(middleX -4, middleY+ 5+i, 14);
            renderLineX(middleX -4, middleY+5+i, 5);
            // LETTER "L"
            renderLineY(middleX +5, middleY+ 5+i, 14);
            renderLineX(middleX +5, middleY+5+i, 5);
            // LETTER "O"
            renderLineY(middleX +14, middleY+ 5+i, 14);
            renderLineY(middleX +22, middleY+ 5+i, 14);
            renderLineX(middleX +14, middleY+5+i, 7);
            renderLineX(middleX +14, middleY-9+i, 7);
            SDL_RenderPresent(renderer);
            Mix_PlayChannel(-1, sound, 0);
            SDL_Delay(delayTime);

        }
    }

    
    
    void SDL::renderBackground()
    {
        SDL_SetRenderDrawColor(renderer, 0,0,0, 255);
        SDL_RenderClear(renderer);
    }
    
    void SDL::renderDot(int x, int y)
    {
        SDL_SetRenderDrawColor(renderer, 255,255,255,255);
        SDL_RenderDrawPoint(renderer, x, y);
    }

    void SDL::renderLine(int x, int y, int length, char cordinates)
    {
        ifEvent();
        if(cordinates == 'X' || cordinates == 'x')
        {
            for(int i{0}; i <= length; i++)
                {   
                    SDL_SetRenderDrawColor(renderer, 255,255,255,255);
                    SDL_RenderDrawPoint(renderer, x + i, y);
                }
        }
        else if(cordinates == 'Y' || cordinates == 'y')
        {
            for(int i{0}; i <= length; i++)
                {   
                    SDL_SetRenderDrawColor(renderer, 255,255,255,255);
                    SDL_RenderDrawPoint(renderer, x, y - i);
                }
        }
    }
    void SDL::renderLineX(int x, int y, int length){renderLine(x, y, length, 'x');}
    void SDL::renderLineY(int x, int y, int length){renderLine(x, y, length, 'y');}
    
