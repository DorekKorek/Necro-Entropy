#include "sdl.h"

void SDL::quotes()
{
   constexpr char democritus[116] {"To a wise man the whole earth is open because the true country of virtuous soul is the entire universe. Democritus."};
    int x = 12;
    int y = 9;

    int space{}; // space between cfharacters
    int i{}; //makes a newline if something
    int nwSpace{};
    int count{0};
    int time{2000};
    
    while(count <= 4)
    {
        ifEvent();
        SDL_Delay(time - 1000);
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
                drawLetter(democritus[i], x + space, y + nwSpace);
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
                drawLetter(democritus[i], x - 4 + space, y + nwSpace);
                space += 4;
            }
        
            nwSpace += 6;
            space = 0;
            for(; i < 37; i++)
            {
                // is open
                drawLetter(democritus[i], x +12 + space, y + nwSpace);
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
                drawLetter(democritus[i], x - 10 + space, y + nwSpace);
                space += 4;
            }
        


            nwSpace += 7;
            space = 0;
            for(; i < 62; i++)
            {
                // country
                drawLetter(democritus[i], x -8  + space, y + nwSpace);
                space += 4;
            }

            nwSpace += 0;
            space = 0;
            for(; i < 66; i++)
            {
                // of
                drawLetter(democritus[i], x + 18  + space, y + nwSpace);
                space += 4;
            }

            nwSpace += 0;
            space = 0;
            for(; i < 74; i++)
            {
                //virtuous
                drawLetter(democritus[i], x + 32  + space, y + nwSpace);
                space += 4;
            }

            nwSpace += 7;
            space = 0;
            for(; i < 93; i++)
            {
                //soul is the entire
                drawLetter(democritus[i], x -12  + space, y + nwSpace);
                space += 4;
            }
        }

        if(count >= 3)
        {
            nwSpace += 7;
            space = 0;
            for(; i < (104); i++)
            {
                // universe
                drawLetter(democritus[i], x +7  + space, y + nwSpace);
                space += 4;
            }
        }
        if(count >= 4)
        {
            nwSpace += 8;
            space = 0;
            for(; i < (116); i++)
            {
                // democriuts
                drawLetter(democritus[i], x -7  + space, y + nwSpace);
                space += 4;
            }

        }


            count++;
            SDL_RenderPresent(renderer);
    }
        SDL_Delay(time );    
}
