#pragma once

#include "../header/GameManager.h"
#include <iostream>
#include <string>

using namespace std;

class Menu
{
private:
    bool gameEngine;

public:
    Menu();
    void mainMenu();
    void mainMenuInput();
    void playMode();
    void playModeInput();

    void initSingleplayer();
    void initMultiplayer();

    void playAgain();
    void playAgainInput();

    void setGameEngine(bool _gameEngine);
};