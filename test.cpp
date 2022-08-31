#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class TicTacToe
{
public:
    TicTacToe();
    void PlayGAme();

private:
    int arr[3][3];
    int PlayerTurn;
    void drawBoard();
    int checkwin();
    void playermove();
    bool checkdraw();
    bool checkresult();
};

TicTacToe::TicTacToe()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = 0;
        }
    }
    srand(time(0));
    PlayerTurn = rand() % 2 + 1;
}

void TicTacToe::PlayGAme()
{
    while (1)
    {
        system("cls");
        drawBoard();
        playermove();
        if (checkresult())
            break;
    }
    cout << endl;
}

void TicTacToe::drawBoard()
{
    cout << "Player 1(1) - Player 2(2) " << endl
         << endl;
    cout << "Turn: Player " << PlayerTurn << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
            if (j == 2)
                continue;
            cout << " | ";
        }
        if (i == 2)
            continue;
        cout << endl
             << "_|_|___" << endl
             << "   |   |   " << endl;
    }
};

void TicTacToe::playermove()
{

    int row, col;
    bool correctmove = false;
    cout << endl
         << endl
         << "Make your Move!" << endl;
    while (!correctmove)
    {
        cout << "masukan baris (0 - 2): ";
        cin >> row;
        cout << "masukan kolom (0 - 2): ";
        cin >> col;
        if ((row < 3 && row > -1) || (col > -1 && col < 3))
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arr[row][col] == 0)
                        arr[row][col] = PlayerTurn;
                    correctmove = true;
                    PlayerTurn++;
                    if (PlayerTurn > 2)
                        PlayerTurn = 1;
                }
            }
        }
        if (!correctmove)
            cout << "input salah, silhkan masukan lagi" << endl;
    }
};

bool TicTacToe::checkresult()
{
    int check = checkwin();
    switch (check)
    {
    case 1:
        system("cls");
        drawBoard();
        cout << endl
             << endl
             << "Player 1 Menang cuy!";
        return true;
    case 2:
        system("cls");
        drawBoard();
        cout << endl
             << endl
             << "Yah, Komputer Menang!";
        return true;
    case -1:
        if (checkdraw())
        {
            system("cls");
            drawBoard();
            cout << endl
                 << endl
                 << "match berakhir imbang";
            return true;
        }
        break;
    }
    return false;
};

int TicTacToe ::checkwin()
{
    for (int player = 1; player < 3; player++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (arr[i][0] == player && arr[i][1] == player && arr[i][2] == player)
                return player;
            if (arr[0][i] == player && arr[i][1] == player && arr[2][i] == player)
                return player;
        }
        if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player)
            return player;
        if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player)
            return player;

        return -1;
    }
};

bool TicTacToe::checkdraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
                return false;
        }
    }
    return true;
};

int main()
{

    TicTacToe obj;
    obj.PlayGAme();
    system("pause");
    return 0;
}