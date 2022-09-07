#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Board
{
private:
    std::string board[3][3];

    bool checkHorizontal();
    bool checkVertical();
    bool checkDiagonal();

public:
    Board();

    void printBoard();
    bool setBoard(int index, char value);
    bool checkWin();
    bool checkFull();
};