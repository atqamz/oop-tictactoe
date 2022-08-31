#include <iostream>
using namespace std;

class Board
{
public:
    string board[3][3];

    bool checkHorizontal()
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

    bool checkVertical()
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

    bool checkDiagonal()
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

    bool checkBoard()
    {
        if (checkHorizontal() || checkVertical() || checkDiagonal())
        {
            return true;
        }
        return false;
    }

    void printBoard()
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " | ";
            }

            if (i != 2)
                cout << endl
                     << "- - - - -"
                     << endl;
        }
    }

    void setBoard()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = " ";
            }
        }
    }
};