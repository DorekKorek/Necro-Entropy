#include "includes.h"

class SDL
{
    public:
    
    SDL()
    {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(width * scale, height * scale, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, scale, scale);
    }

    void Quit()
    {
        running = false;
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        SDL_Quit();
        
    }

    void ifEvent()
    {
        SDL_Event event;
        if (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                Quit();
            }
        }
        
    }
    
    void helloRender()
    {
        //int delayTime = 5000;
        int middleX = width/2;
        int middleY = height/2;
        renderBackground();
        // LETTER "H"
        renderDotLineY(middleX -25, middleY+ 5, 14);
        renderDotLineX(middleX -24, middleY- 2, 7);
        renderDotLineY(middleX -17, middleY+ 5, 14);
        // LETTER "E"
        renderDotLineY(middleX -13, middleY+ 5, 14);
        renderDotLineX(middleX -13, middleY-9, 5);
        renderDotLineX(middleX -13, middleY-10 + 8, 5);
        renderDotLineX(middleX -13, middleY-10 + 15, 5);
        // LETTER "L"
        renderDotLineY(middleX -4, middleY+ 5, 14);
        renderDotLineX(middleX -4, middleY-10 + 15, 5);
        // LETTER "L"
        renderDotLineY(middleX +5, middleY+ 5, 14);
        renderDotLineX(middleX +5, middleY-10 + 15, 5);
        // LETTER "O"
        renderDotLineY(middleX +14, middleY+ 5, 14);
        renderDotLineY(middleX +22, middleY+ 5, 14);
        renderDotLineX(middleX +14, middleY-10 + 15, 7);
        renderDotLineX(middleX +14, middleY-9, 7);
        
    }

    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    
    const int width{72};
    const int height{64};
    const int scale{14};
    bool running{true};
    
    private:
    
    void renderBackground()
    {
        SDL_SetRenderDrawColor(renderer, 0,0,0, 255);
        SDL_RenderClear(renderer);
    }
    
    void renderDot(int x, int y)
    {
        SDL_SetRenderDrawColor(renderer, 255,255,255,255);
        SDL_RenderDrawPoint(renderer, x, y);
    }

    void renderDotLine(int x, int y, int length, char cordinates)
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
    void renderDotLineX(int x, int y, int length){renderDotLine(x, y, length, 'x');}
    void renderDotLineY(int x, int y, int length){renderDotLine(x, y, length, 'y');}
    
    void delayAndRender(int delayTime)
    {
        SDL_Delay(delayTime);
        SDL_RenderPresent(renderer); 
    }  

};