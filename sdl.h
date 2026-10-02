#include "includes.h"

class Player
{
    public:

    public:

    int posX{};
    int posY{};

    Player();

};

class SDL
{
    
    static constexpr int width{72};
    static constexpr int height{64};
    
    public:
    Player player;
    
    SDL();
    
    void Quit();
    void ifEvent();
    
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    Mix_Chunk* sound = nullptr;
    bool running{true};
    
    void renderLine(int x, int y, int length, char cordinates);
    void renderLineX(int x, int y, int length);
    void renderLineY(int x, int y, int length);
    void renderPlayer(int x, int y);
    void renderHello();
    void letter(char letter);
    
    static constexpr int middleX {width/2};
    static constexpr int middleY {height/2};
    void renderBackground();
    int delayTime = 800;
    
    
    private:
    
    
    const int scale{14};
    
};

    inline Player::Player() : posX {SDL::middleX}, posY {SDL::middleY} {};