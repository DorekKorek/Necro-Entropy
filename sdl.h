#pragma once
#include "includes.h"

    
    enum Type
    {
        dead = 0,
        alive = 1,
        monster = 2

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



        
        //int grid[hiddenScreenWidth][hiddenScreenHeight]{};
        //int nextGrid[hiddenScreenWidth][hiddenScreenHeight]{};

        std::array<std::array<int, fullScreenY>, fullScreenX> grid{};
        std::array<std::array<int, fullScreenY>, fullScreenX> nextGrid{};
        
        //SDL.cpp
        SDL();
        void Quit();
        void ifEvent();
        void renderBackground();
        
        
        int countNeighbors(int x, int y);
        
        void gridRender();
        void drawOnScreen(int x, int y);


        SDL_Window* window = nullptr;
        SDL_Renderer* renderer = nullptr;
        Mix_Chunk* sound = nullptr;
        Mix_Chunk* soundLong = nullptr;
        Mix_Chunk* deathSound = nullptr;
        bool running{true};
        const int scale{14};
    };