#include "sdl.h"

void SDL::renderEndScreen(bool isVictory)
    {
        int delayTime = 800;
        if(isVictory == false)
        {
            Mix_PlayChannel(-1, deathSound, 0);
        }
        if(isVictory == true)
        {
            Mix_PlayChannel(-1, winSound, 0);
        }
        int moveUp{10};
        while(true)
        {
            Mix_PlayChannel(-1, sound, 0);
            int countDots{};
            SDL_Delay(1000);
            renderBackground();
           for(int gx{offsetX}; gx < offsetX + screenX ; gx++)
           {
               for(int gy{offsetY}; gy < offsetX + screenY; gy++)
               {    
                    countDots += grid[gx][gy];
                    grid[gx][gy] = grid[gx][gy + moveUp];
               }
            }

            
            displayGrid();
            SDL_RenderPresent(renderer);
            moveUp+= 10;
            if(countDots == 0){break;}
        }

        renderBackground();
            bigLetter('Y');
            bigLetter('O');
            bigLetter('U');
        
            SDL_RenderPresent(renderer);
          Mix_PlayChannel(-1, soundLong, 0);
            SDL_Delay(delayTime+ 300);
            renderBackground();
        if(isVictory == false)
        {
            bigLetter('Y');
            bigLetter('O');
            bigLetter('U');
            bigLetter('D');
            bigLetter('I');
            bigLetter('E');
            bigLetter('d');
        }
         if(isVictory == true)
        {
            bigLetter('Y');
            bigLetter('O');
            bigLetter('U');
            bigLetter('W');
            bigLetter('0');
            bigLetter('N');
        }
            SDL_RenderPresent(renderer);
          Mix_PlayChannel(-1, soundLong, 0);
            SDL_Delay(delayTime +500);
        
       

        Quit();
    }


    void SDL::bigLetter(char letter)
    {
      switch (letter)
      {
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
          case 'o':
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
          case ' ':
          
              break;

          case 'W':
          case 'w':
              {
                  // Lewa i prawa krawędź
                  renderLineY(middleX + 1, middleY + 5, 14);
                  renderLineY(middleX + 7, middleY + 5, 14);
                  // Dół
                  renderLineX(middleX + 1, middleY + 5, 6);
                  // Środkowy pionowy "szpic" (do połowy wysokości)
                  renderLineY(middleX + 4, middleY + 5, 7);
                  break;
              }
          case 'N':
          case 'n':
              {
                  // Lewa i prawa krawędź
                  renderLineY(middleX + 17, middleY + 5, 14);
                  renderLineY(middleX + 23, middleY + 5, 14);
                  // Kaskadowa imitacja przekątnej (skoro nie masz renderLineDiagonal)
                  renderLineY(middleX + 18, middleY - 6, 2);
                  renderLineY(middleX + 19, middleY - 3, 2);
                  renderLineY(middleX + 20, middleY, 2);
                  renderLineY(middleX + 21, middleY + 3, 2);
                  renderLineY(middleX + 22, middleY + 5, 2);
                  break;
              }
          case '0': // Użyj '0' zamiast 'O', żeby narysować drugie "O" w "WON"
              {
                  renderLineY(middleX + 9, middleY + 5, 14);
                  renderLineY(middleX + 15, middleY + 5, 14);
                  renderLineX(middleX + 9, middleY + 5, 6);
                  renderLineX(middleX + 9, middleY - 9, 6);
                  break;
              }
      }
    }