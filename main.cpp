#include "interfaces/GameManager.h"

int main()
{
    srand((unsigned)time(0));
    GameManager gameManager;
    gameManager.gameLoop();

    return 0;
}