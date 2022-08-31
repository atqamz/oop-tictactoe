#include <iostream>
#include <cmath>
using namespace std;

class Player
{
public:
    string username;
    bool isTurn;

    Player(string _username)
    {
        username = _username;
        isTurn = false;
    }

    void setPlayerTurn()
    {
        isTurn = true;
    }

    void unsetPlayerTurn()
    {
        isTurn = false;
    }

    int playTurn()
    {
        int input;
        cout << "Enter your move [1 - 9]: ";
        cin >> input;

        return input;
    }
};

class Bot : public Player
{
public:
    Bot(string _username) : Player(_username)
    {
        username = _username;
        isTurn = false;
    }

    int playBotTurn(string board[3][3])
    {
        int input;
        input = rand() % 9 + 1;

        return input;
    }
};