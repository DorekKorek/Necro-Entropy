#pragma once
#include "includes.h"
#include "player.h"

    
    class SDL
    {
        public:
        static constexpr int screenWidth{72};
        static constexpr int screenHeight{64};
        static constexpr int hiddenScreenWidth{72*4};
        static constexpr int hiddenScreenHeight{64*4};
        
        
        //SDL.cpp
             SDL();
        void Quit();
        void ifEvent();
        void renderBackground();
        
        SDL_Window* window = nullptr;
        SDL_Renderer* renderer = nullptr;
        Mix_Chunk* sound = nullptr;
        Mix_Chunk* soundLong = nullptr;
        Mix_Chunk* deathSound = nullptr;
        bool running{true};
        static constexpr int middleX {screenWidth/2};
        static constexpr int middleY {screenHeight/2};
        
        Player player{middleX, middleY};

        const int scale{14};
        
        //graphic.cpp
        int delayTime = 800;
        void renderLine(int x, int y, int length, char cordinates);
        void renderLineX(int x, int y, int length);
        void renderLineY(int x, int y, int length);
        void renderHello();
        void renderDeath();
        void helloLetter(char letter);
        void deathLetter(char letter);
        void gliderGun(int x, int y);
        //game.cpp
        enum isOn
        {
            onLife = 1,
            offLife = 0,
            onPlayer = 2
        };   
        
        int grid[hiddenScreenWidth][hiddenScreenHeight]{};
        int nextGrid[hiddenScreenWidth][hiddenScreenHeight]{};
        
        int countNeighbors(int x, int y);
        void drawLife(int x, int y);
        
        void rulesOfLife(int x, int y);
        void ruleLife();
        void renderLife(int skipGridSet =0);
        void isDead();

        void renderPlayer(int x, int y);
    };