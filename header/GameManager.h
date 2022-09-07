#pragma once

using namespace std;

class GameManager
{
private:
    bool gameOff;
    bool isOver;

    void menu();
    void menuInput();
    void playMode();
    void playModeInput();
    void singleplayer();
    void multiplayer();
    void playAgain();
    void playAgainInput();

public:
    GameManager();
    void gameLoop();
};