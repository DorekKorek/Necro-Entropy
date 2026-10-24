#pragma once
#include "includes.h"

    class SDL;

    class Player
    {
        public:
        int posX;
        int posY;
        
    };
    
     enum Type
    {
        dead,
        alive,
        player, 
        monster 

    };

    class SDL
    {
        public:
        static constexpr int screenX{74};
        static constexpr int screenY{64};

        static constexpr int fullScreenX{74*6}; // 444
        static constexpr int fullScreenY{64*6}; // 384

        static constexpr int offsetX{fullScreenX/2}; // 222
        static constexpr int offsetY{fullScreenY/2}; // 192
        
        static constexpr int middleX {screenX/2}; // 37
        static constexpr int middleY {screenY/2}; // 32

        
        
        std::array<std::array<int, fullScreenY>, fullScreenX> grid{};

        //SDL.cpp
        SDL();
        void Quit();
        void ifEvent(int frames = 0);
        void renderBackground();
        
        Player player{};
        
        void setGridCellState(int x, int y, int type = alive);
        void drawToScreen(int x, int y, int type);
        void PlayerLogic();
        int countNeighbors(int x, int y);
        int conwayLogic(int x, int y);
        void collisonCheck();
        
        void updateCellState();
        void displayGrid();

        
        void bigLetter(char letter);
        void drawLetter(char letter, int x, int y);   
        void drawNumber(int number, int x, int y);
        
        void renderEndScreen(bool isVictory);
        void quotes();
        void timer(int frames, int &time);
        
        void renderLine(int x, int y, int length, char cordinates);
        void renderLineX(int x, int y, int length);
        void renderLineY(int x, int y, int length);

        void gliderGunLeftDown(int x, int y);
        void gliderGunRightDown(int x, int y);
        void spaceshipLeft(int x, int y);
        void spaceshipRight(int x, int y);

        SDL_Window* window = nullptr;
        SDL_Renderer* renderer = nullptr;
        Mix_Chunk* sound = nullptr;
        Mix_Chunk* soundLong = nullptr;
        Mix_Chunk* deathSound = nullptr;
        Mix_Chunk* winSound = nullptr;
        bool running{true};
        const int scale{14};
    };