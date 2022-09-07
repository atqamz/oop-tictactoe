#include "header/GameManager.h"
#include <iostream>

int main()
{
    srand((unsigned)time(0));
    GameManager gameManager;
    gameManager.gameLoop();

    return 0;   
}