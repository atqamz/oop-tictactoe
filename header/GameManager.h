#pragma once

#include "Board.h"
#include "Player.h"
#include <vector>

using namespace std;

class GameManager
{
private:
    bool isOver;
    vector<Player> players;
    Board board;

    void gameTurn();
    void announceWin();
    void announceDraw();

public:
    GameManager(vector<Player> players, Board board);
    void gameLoop();
};