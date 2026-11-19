// game.cpp
// Team MAO
// 16/11/2026

#include <iostream>
#include "RPG.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int choice;
    string name1;
    RPG game1;

    cout << "Welcome to the start of the game." << endl;
    cout << "1. New Game" << endl;
    cout << "2. Load Game" << endl;
    cin >> choice;

    if (choice && choice == 1)
    {
        // NEW GAME

        cout << "Please enter your character's name:" << endl;
        cin >> name1;

        game1.setName(name1);

        cout << "WELCOME " << game1.getName() << "!!!!" << endl;
        cout << "Enter choice numbers to select. \nPress 0 at anytime to open menu" << endl;

        this_thread::sleep_for(chrono::seconds(1));

        game1.ClassSelect();
    }
    else if (choice == 2)
    {
        // LOAD GAME

        if (!game1.LoadGame())
        {
            cout << "Starting a new game instead" << endl;

            cout << "Please enter your character's name:" << endl;
            cin >> name1;

            game1.setName(name1);

            cout << "WELCOME " << game1.getName() << "!!!!" << endl;
            cout << "Enter choice numbers to select. \nPress 0 at anytime to open menu" << endl;

            this_thread::sleep_for(chrono::seconds(1));

            game1.ClassSelect();
        }
        else
        {
            cout << "Welcome back, " << game1.getName() << "!" << endl;
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
        return 0;
    }

    // MAIN GAME LOOP

    cout << "\nWelcome to the starting area" << endl;
    cout << "Where would you like to go???" << endl;

    while (game1.getEndGame() == true)
    {
        game1.Menu();
    }

    return 0;
}