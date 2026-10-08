#pragma once
#include "includes.h"


    class Player
    {
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
        
        
        //SDL.cpp
        SDL();
        void Quit();
        void ifEvent();
        void renderBackground();
        
        SDL_Window* window = nullptr;
        SDL_Renderer* renderer = nullptr;
        Mix_Chunk* sound = nullptr;
        bool running{true};
        static constexpr int middleX {width/2};
        static constexpr int middleY {height/2};

        const int scale{14};
        int delayTime = 800;
        
        //dots.cpp
        void renderLine(int x, int y, int length, char cordinates);
        void renderLineX(int x, int y, int length);
        void renderLineY(int x, int y, int length);
        void renderHello();
        void letter(char letter);
        
        //game.cpp
        enum isOn
        {
            off = 0,
            on = 1,
            playerOn = 0
        };
        
        public:
        
        
        int grid[width][height]{};
        void renderPlayer(int x, int y);
        void rulesOfLife(int x, int y);
        int countNeighbors(int x, int y);
        void renderLife(int x, int y);
        void gameLoop();
    };
                                                                                                                                                                        
    inline Player::Player() : posX {SDL::middleX}, posY {SDL::middleY} {};   