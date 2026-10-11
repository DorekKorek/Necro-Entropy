#include "headers/sdl.h"

void SDL::renderHello()
    {
        renderBackground();
        SDL::helloLetter('H');
        SDL_RenderPresent(renderer);
        SDL_Delay(delayTime);
        renderBackground();
        SDL::helloLetter('H');
        SDL::helloLetter('E');
        SDL_RenderPresent(renderer);
        SDL_Delay(delayTime);
        renderBackground();
        SDL::helloLetter('H');
        SDL::helloLetter('E');
        SDL::helloLetter('l');
        SDL_RenderPresent(renderer);
        SDL_Delay(delayTime);
        renderBackground();
        SDL::helloLetter('H');
        SDL::helloLetter('E');
        SDL::helloLetter('l');
        SDL::helloLetter('L');
        SDL_RenderPresent(renderer);
        SDL_Delay(delayTime);
        renderBackground();
        SDL::helloLetter('H');
        SDL::helloLetter('E');
        SDL::helloLetter('l');
        SDL::helloLetter('L');
        SDL::helloLetter('O');
        SDL_RenderPresent(renderer);
        SDL_Delay(delayTime);
        
        int i{9};
        for( ; i <6 * 9; i = i + 9)
        {

            // what purpose is this here???


            renderBackground();
            // LETTER "H"
            renderLineY(middleX -25, middleY+ 5+i, 14);
            renderLineX(middleX -24, middleY- 2+i, 7);
            renderLineY(middleX -17, middleY+ 5+i, 14);
            // LETTER "E"
            renderLineY(middleX -13, middleY+ 5+i, 14);
            renderLineX(middleX -13, middleY-9+i, 5);
            renderLineX(middleX -13, middleY-2+i, 5);
            renderLineX(middleX -13, middleY+5+i, 5);
            // LETTER "L"
            renderLineY(middleX -4, middleY+ 5+i, 14);
            renderLineX(middleX -4, middleY+5+i, 5);
            // LETTER "L"
            renderLineY(middleX +5, middleY+ 5+i, 14);
            renderLineX(middleX +5, middleY+5+i, 5);
            // LETTER "O"
            renderLineY(middleX +14, middleY+ 5+i, 14);
            renderLineY(middleX +22, middleY+ 5+i, 14);
            renderLineX(middleX +14, middleY+5+i, 7);
            renderLineX(middleX +14, middleY-9+i, 7);
            SDL_RenderPresent(renderer);
            Mix_PlayChannel(-1, sound, 0);
            SDL_Delay(delayTime);

        }
    }

    void SDL::helloLetter(char letter)
    {

        switch (letter)
        {
            case 'H':
                {
                renderLineY(middleX -25, middleY+ 5, 14);
                renderLineX(middleX -24, middleY- 2, 7);
                renderLineY(middleX -17, middleY+ 5, 14);
                break;
                }
            case 'E':
                {
                renderLineY(middleX -13, middleY+ 5, 14);
                renderLineX(middleX -13, middleY-9, 5);
                renderLineX(middleX -13, middleY-2, 5);
                renderLineX(middleX -13, middleY+5, 5);
                break;
                }
            case 'l':
                {
                renderLineY(middleX -4, middleY+ 5, 14);
                renderLineX(middleX -4, middleY+5, 5);
                break;
                }
            case 'L':
                {
                renderLineY(middleX +5, middleY+ 5, 14);
                renderLineX(middleX +5, middleY+5, 5);
                break;
                }


            case 'O':
                {
                renderLineY(middleX +14, middleY+ 5, 14);
                renderLineY(middleX +22, middleY+ 5, 14);
                renderLineX(middleX +14, middleY+5, 7);
                renderLineX(middleX +14, middleY-9, 7);
                break;
                }
        }
            Mix_PlayChannel(-1, sound, 0);
    }
    
    