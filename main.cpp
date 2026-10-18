#include "includes.h"
#include "sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};

    Mix_PlayChannel(-1, SDL.sound, 0);
    
    
    SDL.setGridCellState(30, 30);
    SDL.setGridCellState(30, 31);
    SDL.setGridCellState(31, 30);
    SDL.setGridCellState(31, 31);
    
    
    SDL.setGridCellState(19, 5);
    SDL.setGridCellState(19, 6);
    SDL.setGridCellState(19, 7);
    SDL.setGridCellState(19, 8);
    SDL.setGridCellState(19, 9);
    SDL.setGridCellState(19, 10);
    SDL.setGridCellState(19, 11);
    SDL.setGridCellState(19, 12);
    SDL.setGridCellState(19, 13);




    SDL.setGridCellState(32, 32, monster);
    SDL.setGridCellState(32, 33, monster);
    SDL.setGridCellState(33, 32, monster);
    SDL.setGridCellState(33, 33, monster);
    SDL.setGridCellState(-5, -5, monster);

    int frames{1};
    
    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.ifEvent();
        
        if(frames % 200 == 0)
        {
           SDL.updateCellState();
        }

        SDL.displayGrid();

        SDL_RenderPresent(SDL.renderer);
        SDL_Delay(16);
        frames++;
    }
    return 0;
}
