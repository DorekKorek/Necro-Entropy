#include "includes.h"

class SDL
{
    public:

    SDL();

    void Quit();
    void ifEvent();
    
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    Mix_Chunk* sound = nullptr;
    bool running{true};
    
    
    void renderLineX(int x, int y, int length);
    void renderLineY(int x, int y, int length);
    void renderDot(int x, int y);
    void renderHello();
    
    private:
    
    void renderBackground();
    void renderLine(int x, int y, int length, char cordinates);
    
    const int width{72};
    const int height{64};
    const int scale{14};
};