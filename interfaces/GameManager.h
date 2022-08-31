#include <iostream>
#include "Player.h"
#include "Board.h"
using namespace std;

class GameManager
{
private:
    bool gameOff;
    bool isOver;

    void menu()
    {
        cout << "Welcome to TicTacToe" << endl;
        cout << "1. Play" << endl;
        cout << "0. Exit" << endl;
        menuInput();
    }

    void menuInput()
    {
        int input;
        cout << "Choose menu: ";
        cin >> input;

        switch (input)
        {
        case 1:
        {
            playMode();
            break;
        }

        case 0:
        {
            gameOff = false;
        }

        default:
            break;
        }
    }

    void playMode()
    {
        cout << "Play Mode" << endl;
        cout << "1. Singleplayer" << endl;
        cout << "2. Multiplayer" << endl;
        cout << "0. Back" << endl;
        playModeInput();
    }

    void playModeInput()
    {
        int input;
        cout << "Choose play mode: ";
        cin >> input;

        switch (input)
        {
        case 1:
        {
            singleplayer();
            break;
        }
        case 2:
        {
            multiplayer();
            break;
        }
        case 0:
        {
            menu();
        }
        default:
            break;
        }
    }

    void singleplayer()
    {
        cout << "Difficulty" << endl;
        cout << "1. Easy" << endl;
        cout << "2. Medium" << endl;
        cout << "3. Hard" << endl;
        cout << "0. Back" << endl;
        singleplayerInput();
    }

    void singleplayerInput()
    {
        int input;
        cout << "Choose difficulty: ";
        cin >> input;

        switch (input)
        {
        case 1:
            // AI Easy
            break;

        case 2:
            // AI Medium
            break;

        case 3:
            // AI Hard
            break;

        default:
            break;
        }
    }

    void multiplayer()
    {
        Board board;
        board.init();

        string username1, username2;
        cout << "Enter player 1's username: ";
        cin >> username1;
        cout << "Enter player 2's username: ";
        cin >> username2;

        Player player1(username1);
        Player player2(username2);

        player1.setPlayerTurn();

        while (!isOver)
        {
            system("cls");

            if (board.checkWin())
            {
                isOver = true;

                if (!player1.isTurn)
                {
                    cout << "Player 1 wins!" << endl;
                }
                else
                {
                    cout << "Player 2 wins!" << endl;
                }

                board.printBoard();

                break;
            }

            if (player1.isTurn)
                cout << player1.username << "'s turn" << endl;
            else
                cout << player2.username << "'s turn" << endl;

            board.printBoard();
            if (player1.isTurn)
            {
                if (board.setBoard(player1.playTurn(), "X"))
                {
                    player1.unsetPlayerTurn();
                    player2.setPlayerTurn();
                }
            }
            else
            {
                if (board.setBoard(player2.playTurn(), "O"))
                {
                    player2.unsetPlayerTurn();
                    player1.setPlayerTurn();
                }
            }
        }
    }

public:
    GameManager()
    {
        gameOff = false;
    }

    void gameLoop()
    {
        while (!gameOff)
        {
            menu();
        }
    }
};