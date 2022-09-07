#include "../header/Player.h"

#include <iostream>

Player::Player(string _username)
{
    username = _username;
    isTurn = false;
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

Bot::Bot(string _username) : Player(_username)
{
    username = _username;
    isTurn = false;
}

int Bot::playBotTurn()
{
    int input;
    input = rand() % 9 + 1;

    return input;
}