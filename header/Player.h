#pragma once

#include <string>

using namespace std;

class Player
{
private:
    string username;
    bool isTurn;
    bool isBot;

<<<<<<< Updated upstream
public:
=======
>>>>>>> Stashed changes
    Player(string _username, bool _isBot);
    void setPlayerTurn();
    void unsetPlayerTurn();
    int playTurn();
    int playBotTurn();

    string getUsername();
    bool getIsTurn();
    bool getIsBot();
};