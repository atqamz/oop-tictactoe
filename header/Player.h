#pragma once

#include <string>

using namespace std;

class Player
{
public:
    string username;
    bool isTurn;

    Player(string _username);

    void setPlayerTurn();

    void unsetPlayerTurn();

    int playTurn();
};

class Bot : public Player
{
public:
    Bot(string _username);

    int playBotTurn();
};