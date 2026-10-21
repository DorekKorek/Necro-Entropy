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
        dead = 0,
        alive = 1,
        player = 2,
        monster = 3

    };

    class SDL
    {
        public:
        static constexpr int screenX{74};
        static constexpr int screenY{64};

        static constexpr int fullScreenX{72*6};
        static constexpr int fullScreenY{64*6};

        static constexpr int offsetX{fullScreenX/2};
        static constexpr int offsetY{fullScreenY/2};
        
        static constexpr int middleX {screenX/2};
        static constexpr int middleY {screenY/2};

        
        
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

        
        void deathLetter(char letter);
        void drawLetter(char letter, int x, int y);   
        void drawNumber(int number, int x, int y);
        
        void renderDeath();
        void quotes();
        void timer(int frames);
        
        void renderLine(int x, int y, int length, char cordinates);
        void renderLineX(int x, int y, int length);
        void renderLineY(int x, int y, int length);

        SDL_Window* window = nullptr;
        SDL_Renderer* renderer = nullptr;
        Mix_Chunk* sound = nullptr;
        Mix_Chunk* soundLong = nullptr;
        Mix_Chunk* deathSound = nullptr;
        bool running{true};
        const int scale{14};
    };