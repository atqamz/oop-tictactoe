#include <iostream>
#include "interfaces/GameManager.h"

using namespace std;

int main()
{
    GameManager gameManager;
    gameManager.gameLoop();

    return 0;
}