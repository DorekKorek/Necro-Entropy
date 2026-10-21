#include "sdl.h"

 void SDL::renderLine(int x, int y, int length, char cordinates)
    {
        if(cordinates == 'X' || cordinates == 'x')
        {
            for(int i{0}; i <= length; i++)
                {   
                    SDL_SetRenderDrawColor(renderer, 255,255,255,255);
                    SDL_RenderDrawPoint(renderer, x + i, y);
                }
        }
        else if(cordinates == 'Y' || cordinates == 'y')
        {
            for(int i{0}; i <= length; i++)
                {   
                    SDL_SetRenderDrawColor(renderer, 255,255,255,255);
                    SDL_RenderDrawPoint(renderer, x, y - i);
                }
        }
    }
    void SDL::renderLineX(int x, int y, int length){renderLine(x, y, length, 'x');}
    void SDL::renderLineY(int x, int y, int length){renderLine(x, y, length, 'y');}

void SDL::drawNumber(int number, int x, int y)
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 200, 0);

    switch(number)
    {
        case 0:
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }
        case 1:
        {
            SDL_RenderDrawPoint(renderer, x, y);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 4);
            break;
        }
        case 2:
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }
        case 3:
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            break;
        }
        case 4:
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 4);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }
        case 5:
        {
            SDL_RenderDrawPoint(renderer, x, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            break;
        }
        case 6:
        {
            SDL_RenderDrawPoint(renderer, x, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }
        case 7:
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x, y - 4);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }
        case 8:
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }
        case 9:
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            break;
        }
    }
}
void SDL::drawLetter(char letter, int x, int y)
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    switch (letter)
    {
        case ' ':
        {
            break;
        }

        case 'a':
        case 'A':
        {
            SDL_RenderDrawPoint(renderer, x, y);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            break;
        }

        case 'b':
        case 'B':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case 'c':
        case 'C':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'd':
        {
            SDL_RenderDrawPoint(renderer, x, y - 4);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case 'D':
        {
            SDL_RenderDrawPoint(renderer, x-1, y);
            SDL_RenderDrawPoint(renderer, x-2, y);
            SDL_RenderDrawPoint(renderer, x, y-1);
            SDL_RenderDrawPoint(renderer, x, y-2);
            SDL_RenderDrawPoint(renderer, x, y-3);
            SDL_RenderDrawPoint(renderer, x, y-4);
            SDL_RenderDrawPoint(renderer, x, y-5);

            SDL_RenderDrawPoint(renderer, x-2, y-1);
            SDL_RenderDrawPoint(renderer, x-2, y-2);
            SDL_RenderDrawPoint(renderer, x-2, y-3);
            SDL_RenderDrawPoint(renderer, x-2, y-4);
            SDL_RenderDrawPoint(renderer, x-2, y-5);
            SDL_RenderDrawPoint(renderer, x-2, y-6);

            SDL_RenderDrawPoint(renderer, x, y-6);
            SDL_RenderDrawPoint(renderer, x-1, y-6);

            break;
        }

        case 'e':
        case 'E':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'f':
        case 'F':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case 'g':
        case 'G':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            SDL_RenderDrawPoint(renderer, x - 2, y + 1);
            SDL_RenderDrawPoint(renderer, x - 1, y + 1);
            break;
        }

        case 'h':
        case 'H':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'i':
        case 'I':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case 'j':
        case 'J':
        {
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            SDL_RenderDrawPoint(renderer, x - 1, y + 1);
            SDL_RenderDrawPoint(renderer, x - 2, y + 1);
            break;
        }

        case 'k':
        case 'K':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'l':
        case 'L':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 4);
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'm':
        case 'M':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'n':
        case 'N':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'o':
        case 'O':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case 'p':
        case 'P':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x - 2, y + 1);
            break;
        }

        case 'q':
        case 'Q':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            SDL_RenderDrawPoint(renderer, x, y + 1);
            break;
        }

        case 'r':
        case 'R':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            break;
        }

        case 's':
        case 'S':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case 't':
        case 'T':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'u':
        case 'U':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'v':
        case 'V':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case 'w':
        case 'W':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 2, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'x':
        case 'X':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case 'y':
        case 'Y':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x - 2, y - 2);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x, y - 1);
            SDL_RenderDrawPoint(renderer, x, y);
            SDL_RenderDrawPoint(renderer, x - 1, y + 1);
            SDL_RenderDrawPoint(renderer, x - 2, y + 1);
            break;
        }

        case 'z':
        case 'Z':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 2, y);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x, y);
            break;
        }

        case '.':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case ',':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y);
            SDL_RenderDrawPoint(renderer, x - 2, y + 1);
            break;
        }

        case '?':
        {
            SDL_RenderDrawPoint(renderer, x - 2, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y - 1);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        case '!':
        {
            SDL_RenderDrawPoint(renderer, x - 1, y - 4);
            SDL_RenderDrawPoint(renderer, x - 1, y - 3);
            SDL_RenderDrawPoint(renderer, x - 1, y - 2);
            SDL_RenderDrawPoint(renderer, x - 1, y);
            break;
        }

        default:
            break;
    }
}