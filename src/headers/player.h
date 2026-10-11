#pragma once                                                                                                                   
#include "sdl.h"
                                                                                                                   
    class Player                                                                                                                   
    {                                                                                                                              
    public:                                                                                                                        
        int posX;                                                                                                                  
        int posY;                                                                                                                  
                                                                                                                                   
        Player(int startPosX = 3, int startPosY = 3)                                                                                     
            : posX(startPosX), posY(startPosY) {}                                                                                        
                                                                                                                             
    };                                                                                                                             
          