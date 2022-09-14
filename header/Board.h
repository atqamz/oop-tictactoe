#pragma once
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Board
{
private:
    string board[3][3];

    bool checkHorizontal();
    bool checkVertical();
    bool checkDiagonal();

public:
    Board();

    void printBoard();
    bool setBoard(int _index, char _value);
    bool checkWin();
    bool checkFull();
};