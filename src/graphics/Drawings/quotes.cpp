#include "sdl.h"

void SDL::quoteDemocritus(int x,int  y)
{
   constexpr char quote[] {'t', 'o', ' ', 'a', ' ', 'w', 'i', 's', 'e', ' ', 'm', 'a', 'n', ' ', 't', 'h',
    'e', ' ', 'w', 'h', 'o', 'l', 'e', ' ', 'e', 'a', 'r', 't', 'h', ' ', 'i', 's', ' ', 'o',
    'p', 'e', 'n', ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ', 't', 'h', 'e', ' ', 't',
    'r', 'u' , 'e', ' ', 'c' , 'o', 'u' , 'n', 't' , 'r', 'y' , ' ', 'o', 'f' , ' ', 'v',
    'i' , 'r', 't' , 'u', 'o' , 'u', 's' , ' ', 's', 'o' , 'u', 'l' , ' ', 'i', 's' , ' ',
    't', 'h' , 'e', ' ', 'e' , 'n', 't' , 'i', 'r' , 'e', ' ', 'u' , 'n', 'i' , 'v',
    'e' , 'r', 's' , 'e'};

    int space{}; // space between cfharacters
    int i{}; //makes a newline if something
    int nwSpace{};
    int count{};
    int time{2000};
    
    while(count <= 3)
    {
        renderBackground();
        Mix_PlayChannel(-1, sound, 0);
        
        if(count >= 0)
        {
            i = 0;
            nwSpace=0;
            space = 0;
            
            for(; i < 14; i++)
            {
                // to a wise man
                drawLetter(quote[i], x + space, y + nwSpace);
                space += 4;
                
            }
        }


        if(count >= 1)
        {

            nwSpace += 7;
            space = 0;
            for(; i < 30; i++)
            {
                // the whole earth 
                drawLetter(quote[i], x - 4 + space, y + nwSpace);
                space += 4;
            }
        
            nwSpace += 6;
            space = 0;
            for(; i < 37; i++)
            {
                // is open
                drawLetter(quote[i], x +12 + space, y + nwSpace);
                space += 4;
            }
        }

        if(count >= 2)
        {
            nwSpace += 8;
            space = 0;
            for(; i < 55; i++)
            {
                //beacosue the true
                drawLetter(quote[i], x - 10 + space, y + nwSpace);
                space += 4;
            }
        


            nwSpace += 7;
            space = 0;
            for(; i < 62; i++)
            {
                // country
                drawLetter(quote[i], x -8  + space, y + nwSpace);
                space += 4;
            }

            nwSpace += 0;
            space = 0;
            for(; i < 66; i++)
            {
                // of
                drawLetter(quote[i], x + 18  + space, y + nwSpace);
                space += 4;
            }

            nwSpace += 0;
            space = 0;
            for(; i < 74; i++)
            {
                //virtuous
                drawLetter(quote[i], x + 32  + space, y + nwSpace);
                space += 4;
            }

            nwSpace += 7;
            space = 0;
            for(; i < 93; i++)
            {
                //soul is the entire
                drawLetter(quote[i], x -12  + space, y + nwSpace);
                space += 4;
            }
        }

        if(count >= 3)
        {
            nwSpace += 7;
            space = 0;
            for(; i < (static_cast<int>(sizeof(quote))); i++)
            {
                // universe
                drawLetter(quote[i], x +7  + space, y + nwSpace);
                space += 4;
            }
        }


            count++;
            SDL_RenderPresent(renderer);
            SDL_Delay(time);
    }    
}
