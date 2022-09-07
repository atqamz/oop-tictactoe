#pragma once

#include <string>

using namespace std;

class Player
{
public:
    string username;
    bool isTurn;
    bool isBot;

    Player(string _username, bool _isBot);
    void setPlayerTurn();
    void unsetPlayerTurn();
    int playTurn();
    int playBotTurn();
};