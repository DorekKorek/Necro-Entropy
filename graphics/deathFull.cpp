#include "sdl.h"

void SDL::renderEndScreen(bool didPlayerWin)
    {
        int delayTime = 800;
        Mix_PlayChannel(-1, deathSound, 0);
        int moveUp{10};
        while(true)
        {
            
            SDL_Delay(1000);
            renderBackground();
           for(int gx{offsetX}; gx < offsetX + screenX ; gx++)
           {
               for(int gy{offsetY}; gy < offsetX + screenY; gy++)
               {    
                    grid[gx][gy] = grid[gx][gy + moveUp];
               }
            }
            displayGrid();
            SDL_RenderPresent(renderer);
            Mix_PlayChannel(-1, sound, 0);
            moveUp+= 10;
            if (moveUp == 50){break;}
        }
        
        SDL_Delay(delayTime);
        renderBackground();
            bigLetters('Y');
            bigLetters('O');
            bigLetters('U');
        SDL_RenderPresent(renderer);
      Mix_PlayChannel(-1, soundLong, 0);
        SDL_Delay(delayTime+ 300);
        renderBackground();
        if(didPlayerWin==false)
        {
            bigLetters('Y');
            bigLetters('O');
            bigLetters('U');
            bigLetters('D');
            bigLetters('I');
            bigLetters('E');
            bigLetters('d');//small d does win i know its stupid
        }
        if(didPlayerWin)
        {
            bigLetters('Y');
            bigLetters('O');
            bigLetters('U');
            bigLetters('W');
            bigLetters('o'); //same here
            bigLetters('N');
        }
        SDL_RenderPresent(renderer);
      Mix_PlayChannel(-1, soundLong, 0);
        SDL_Delay(delayTime +500);
       

        Quit();
    }

   void SDL::bigLetters(char letter)
{
    switch (letter)
    {
        // --- LITERY DLA "YOU" (bez zmian) ---
        case 'Y':
        case 'y':
            {
                renderLineY(middleX - 28, middleY + 5, 6);
                renderLineY(middleX - 29, middleY - 2, 0);
                renderLineY(middleX - 27, middleY - 2, 0);
                renderLineY(middleX - 30, middleY - 3, 1);
                renderLineY(middleX - 26, middleY - 3, 1);
                renderLineY(middleX - 31, middleY - 5, 4);
                renderLineY(middleX - 25, middleY - 5, 4);
                break;
            }
        case 'O':
            {
                renderLineY(middleX - 22, middleY + 5, 14);
                renderLineY(middleX - 16, middleY + 5, 14);
                renderLineX(middleX - 22, middleY + 5, 6);
                renderLineX(middleX - 22, middleY - 9, 6);
                break;
            }
        case 'U':
        case 'u':
            {
                renderLineY(middleX - 13, middleY + 5, 14);
                renderLineY(middleX - 7, middleY + 5, 14);
                renderLineX(middleX - 13, middleY + 5, 6);
                break;
            }

        // --- LITERY DLA "DIED" (zostawione, gdybyś jeszcze potrzebował) ---
        case 'D': 
            {
                renderLineY(middleX + 1, middleY + 5, 14);
                renderLineX(middleX + 1, middleY - 9, 5);
                renderLineX(middleX + 1, middleY + 5, 5);
                renderLineY(middleX + 6, middleY + 4, 12);
                break;
            }
        case 'I':
        case 'i':
            {
                renderLineY(middleX + 11, middleY + 5, 14);
                renderLineX(middleX + 9, middleY - 9, 4);
                renderLineX(middleX + 9, middleY + 5, 4);
                break;
            }
        case 'E':
        case 'e':
            {
                renderLineY(middleX + 16, middleY + 5, 14);
                renderLineX(middleX + 16, middleY - 9, 5);
                renderLineX(middleX + 16, middleY - 2, 5);
                renderLineX(middleX + 16, middleY + 5, 5);
                break;
            }
        case 'd': 
            {
                renderLineY(middleX + 24, middleY + 5, 14);
                renderLineX(middleX + 24, middleY - 9, 5);
                renderLineX(middleX + 24, middleY + 5, 5);
                renderLineY(middleX + 29, middleY + 4, 12);
                break;
            }

        // --- NOWE LITERY DLA "WON" (zastępują "DIED" po prawej stronie) ---
        case 'W':
        case 'w':
            {
                // Lewa i prawa pionowa linia (szerokość 8 px: od +1 do +9)
                renderLineY(middleX + 1, middleY + 5, 14);
                renderLineY(middleX + 9, middleY + 5, 14);
                // Środkowy "ząb" litery W
                renderLineY(middleX + 5, middleY + 2, 6);
                // Dolne połączenia
                renderLineX(middleX + 1, middleY + 5, 4);
                renderLineX(middleX + 5, middleY + 5, 4);
                break;
            }
        case 'o': // Drugie 'o' (w słowie WON) przesunięte w prawo
            {
                renderLineY(middleX + 12, middleY + 5, 14);
                renderLineY(middleX + 18, middleY + 5, 14);
                renderLineX(middleX + 12, middleY + 5, 6);
                renderLineX(middleX + 12, middleY - 9, 6);
                break;
            }
        case 'N':
        case 'n':
            {
                // Lewa i prawa pionowa linia (od +21 do +27)
                renderLineY(middleX + 21, middleY + 5, 14);
                renderLineY(middleX + 27, middleY + 5, 14);
                // Przekątna zrobiona z pionowych odcinków (tak jak w Twoim 'Y')
                renderLineY(middleX + 22, middleY - 5, 3);
                renderLineY(middleX + 23, middleY - 2, 2);
                renderLineY(middleX + 24, middleY + 0, 2);
                renderLineY(middleX + 25, middleY + 2, 2);
                renderLineY(middleX + 26, middleY + 4, 1);
                break;
            }

        case ' ':
            break;
    }
}