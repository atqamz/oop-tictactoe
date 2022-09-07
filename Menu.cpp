#include "header/Menu.h"

using namespace std;

Menu::Menu()
{
    gameEngine = true;

    while (gameEngine)
        mainMenu();
}

void Menu::mainMenu()
{
    system("cls");
    cout << "Welcome to TicTacToe" << endl;
    cout << "1. Play" << endl;
    cout << "0. Exit" << endl;
    mainMenuInput();
}

void Menu::mainMenuInput()
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
        gameEngine = false;
        break;
    }

    default:
        break;
    }
}

void Menu::playMode()
{
    system("cls");
    cout << "Welcome to TicTacToe" << endl;
    cout << "Play Mode" << endl;
    cout << "1. Singleplayer" << endl;
    cout << "2. Multiplayer" << endl;
    cout << "0. Back" << endl;
    playModeInput();
}

void Menu::playModeInput()
{
    int input;
    cout << "Choose play mode: ";
    cin >> input;

    switch (input)
    {
    case 1:
    {
        initSingleplayer();
        playAgain();
        break;
    }
    case 2:
    {
        initMultiplayer();
        playAgain();
        break;
    }
    case 0:
    {
        mainMenu();
    }
    default:
        break;
    }
}

void Menu::initSingleplayer()
{
    Board board;
    Player player1("Player 1", false);
    Player player2("Bot", true);
    vector<Player> players = {player1, player2};
    GameManager gameManager(players, board);
    gameManager.gameLoop();
}

void Menu::initMultiplayer()
{
    Board board;
    Player player1("Player 1", false);
    Player player2("Player 2", false);
    vector<Player> players = {player1, player2};
    GameManager gameManager(players, board);
    gameManager.gameLoop();
}

void Menu::playAgain()
{
    cout << endl;
    cout << "Play again?" << endl;
    cout << "1. Yes" << endl;
    cout << "0. No" << endl;
    playAgainInput();
}

void Menu::playAgainInput()
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
        gameEngine = false;
        break;
    }
    default:
        break;
    }
}
