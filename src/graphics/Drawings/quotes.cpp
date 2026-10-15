#include "sdl.h"

void SDL::Democritus(int x,int  y)
{
   constexpr char quote[] {'t', 'o', ' ', 'a', ' ', 'w', 'i', 's', 'e', ' ', 'm', 'a', 'n', ' ', 't', 'h',
    'e', ' ', 'w', 'h', 'o', 'l', 'e', ' ', 'e', 'a', 'r', 't', 'h', ' ', 'i', 's', ' ', 'o',
    'p', 'e', 'n', ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ', 't', 'h', 'e', ' ', 't',
    'r', 'u' , 'e', ' ', 'c' , 'o', 'u' , 'n', 't' , 'r', 'y' , ' ', 'o', 'f' , ' ', 'v',
    'i' , 'r', 't' , 'u', 'o' , 'u', 's' , ' ', 's', 'o' , 'u', 'l' , ' ', 'i', 's' ,
    't', 'h' , 'e', ' ', 'e' , 'n', 't' , 'i', 'r' , 'e', ' ', 'u' , 'n', 'i' , 'v',
    'e' , 'r', 's' , 'e'};

    //(static_cast<int>(sizeof(quote))
    int space{}; // space between cfharacters
    int i{}; //makes a newline if something
    for(; i < 14; i++)
    {
        drawLetter(quote[i], x + space, y);
        space += 4;
    }
    space = 0;

    for(; i < 30; i++)
    {
        drawLetter(quote[i], x - 4 + space, y + 8);
        space += 4;
    }
    space = 0;

    for(; i < 37; i++)
    {
        drawLetter(quote[i], x - 4 + space, y + 16);
        space += 4;
    }
}