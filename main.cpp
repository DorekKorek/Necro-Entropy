#include "includes.h"
#include "sdl.h"

int main()
{

    //SDL INITALIZATION
    SDL SDL{};

    Mix_PlayChannel(-1, SDL.sound, 0);
    
    
    
    SDL.setGridCellState(19, 5);
    SDL.setGridCellState(19, 6);
    SDL.setGridCellState(19, 7);
    SDL.setGridCellState(19, 8);
    SDL.setGridCellState(19, 9);
    SDL.setGridCellState(19, 10);
    SDL.setGridCellState(19, 11);
    SDL.setGridCellState(19, 12);
    SDL.setGridCellState(19, 13);
    SDL.setGridCellState(19, 14);
    SDL.setGridCellState(19, 15);
    SDL.setGridCellState(19, 16);
    
    SDL.setGridCellState(19, SDL.screenY);
    SDL.setGridCellState(19, SDL.screenY+1);
    SDL.setGridCellState(19, SDL.screenY+2);

    SDL.setGridCellState(25, 12, monster);
    SDL.setGridCellState(25, 13, monster);
    SDL.setGridCellState(25, 14, monster);
    SDL.setGridCellState(25, 15, monster);
    SDL.setGridCellState(25, 16, monster);

    SDL.quotes();

    int frames{1};
    
    while (SDL.running)
    {
        SDL.renderBackground();
        SDL.PlayerLogic();
        SDL.ifEvent();
        if(frames % 30 == 0)
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
