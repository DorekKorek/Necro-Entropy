    #include "sdl.h"
    
    void SDL::renderLine(int x, int y, int length, char cordinates)
    {
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