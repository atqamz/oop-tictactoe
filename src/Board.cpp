#include "../header/Board.h"

using namespace std;

Board::Board()
{
    int index = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            this->board[i][j] = to_string(index);
            index++;
        }
    }
}

bool Board::checkHorizontal()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true;
        }
    }
    return false;
}

bool Board::checkVertical()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return true;
        }
    }
    return false;
}

bool Board::checkDiagonal()
{
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return true;
    }
    return false;
}

void Board::printBoard()
{

    for (int i = 0; i < 3; i++)
    {
        cout << "\t ";
        for (int j = 0; j < 3; j++)
        {
            if (j != 2)
                cout << board[i][j] << " | ";
            else
                cout << board[i][j];
        }
        cout << " ";

        if (i != 2)
            cout << endl
                 << "\t---|---|---"
                 << endl;
    }
    cout << endl;
}

bool Board::setBoard(int index, char value)
{
    index = index - 1;
    int row = index / 3;
    int col = index % 3;

    if (board[row][col] == "X" || board[row][col] == "O")
    {
        cout << "This field is already set" << endl;
        return false;
    }
    else
    {
        board[row][col] = value;
        return true;
    }
}

bool Board::checkWin()
{
    if (checkHorizontal() || checkVertical() || checkDiagonal())
    {
        return true;
    }
    return false;
}

bool Board::checkFull()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == "1" || board[i][j] == "2" || board[i][j] == "3" || board[i][j] == "4" || board[i][j] == "5" || board[i][j] == "6" || board[i][j] == "7" || board[i][j] == "8" || board[i][j] == "9")
            {
                return false;
            }
        }
    }
    return true;
}