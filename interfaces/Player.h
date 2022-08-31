#include <iostream>
using namespace std;

class Player
{
public:
    string username;
    bool isTurn;

    Player(string _username)
    {
        username = _username;
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