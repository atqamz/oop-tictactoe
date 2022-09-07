#pragma once

#include "../header/GameManager.h"
#include <iostream>
#include <string>

using namespace std;

class Menu
{
public:
    bool gameEngine;

    Menu();
    void mainMenu();
    void mainMenuInput();
    void playMode();
    void playModeInput();

    void initSingleplayer();
    void initMultiplayer();

    void playAgain();
    void playAgainInput();
};