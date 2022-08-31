#include <iostream>
#include "interfaces/GameManager.h"

using namespace std;

int main()
{
    srand((unsigned)time(0));
    GameManager gameManager;
    gameManager.gameLoop();

    return 0;
}