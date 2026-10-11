#include "sdl.h"

void SDL::renderDeath()
    {

        Mix_PlayChannel(-1, deathSound, 0);
        int moveUp{10};
        while(true)
        {
            
            SDL_Delay(1000);
            renderBackground();
           for(int indexX{}; indexX < screenWidth ; indexX++)
           {
               for(int indexY{}; indexY < screenHeight; indexY++)
               {    
                   grid[indexX][indexY] = grid[indexX][indexY + moveUp];    
                }
            }
            renderLife(1);
            SDL_RenderPresent(renderer);
            Mix_PlayChannel(-1, sound, 0);
            moveUp+= 10;
            if (moveUp == 50){break;}
        }
        
        SDL_Delay(delayTime);
        renderBackground();
        deathLetter('Y');
        deathLetter('O');
        deathLetter('U');
        SDL_RenderPresent(renderer);
      Mix_PlayChannel(-1, soundLong, 0);
        SDL_Delay(delayTime+ 300);
        renderBackground();
        deathLetter('Y');
        deathLetter('O');
        deathLetter('U');
        deathLetter('D');
        deathLetter('I');
        deathLetter('E');
        deathLetter('d');
        SDL_RenderPresent(renderer);
      Mix_PlayChannel(-1, soundLong, 0);
        SDL_Delay(delayTime +500);
       

        Quit();
    }

    void SDL::deathLetter(char letter)
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
      }
    }