#include "header/GameManager.h"
#include <vector>

using namespace std;

GameManager::GameManager(vector<Player> players, Board board)
{
    this->isOver = false;
    this->board = board;
    this->players = players;
}

void GameManager::gameLoop()
{
    if (!isOver)
        players[0].setPlayerTurn();

    while (!isOver)
    {
        system("cls");

        cout << "TicTacToe!!" << endl;

        if (board.checkWin())
        {
            announceWin();
            break;
        }

        if (board.checkFull())
        {
            announceDraw();
            break;
        }

        gameTurn();
    }
}

void GameManager::announceWin()
{
    isOver = true;

    if (!players[0].isTurn)
    {
        cout << "Player 1 wins!" << endl;
    }
    else
    {
        cout << "Player 2 wins!" << endl;
    }

    board.printBoard();
}

void GameManager::gameTurn()
{
    if (players[0].isTurn)
        cout << players[0].username << "'s turn" << endl;
    else
        cout << players[1].username << "'s turn" << endl;

    board.printBoard();
    if (players[0].isTurn)
    {
        if (board.setBoard(players[0].playTurn(), 'X'))
        {
            players[0].unsetPlayerTurn();
            players[1].setPlayerTurn();
        }
    }
    else
    {
        if (players[1].isBot)
        {
            if (board.setBoard(players[1].playBotTurn(), 'O'))
            {
                players[1].unsetPlayerTurn();
                players[0].setPlayerTurn();
            }
        }
        else
        {
            if (board.setBoard(players[1].playTurn(), 'O'))
            {
                players[1].unsetPlayerTurn();
                players[0].setPlayerTurn();
            }
        }
    }
}

void GameManager::announceDraw()
{
    isOver = true;

    cout << "Draw!" << endl;

    board.printBoard();
}