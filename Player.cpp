#include "header/Player.h"
#include <iostream>

Player::Player(string _username, bool _isBot)
{
    this->username = _username;
    this->isBot = _isBot;
    this->isTurn = false;
}

void Player::setPlayerTurn()
{
    isTurn = true;
}

void Player::unsetPlayerTurn()
{
    isTurn = false;
}

int Player::playTurn()
{
    int input;
    cout << "Enter your move [1 - 9]: ";
    cin >> input;

    return input;
}

int Player::playBotTurn()
{

    int input;
    input = rand() % 9 + 1;

    return input;
}