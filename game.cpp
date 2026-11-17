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
    int endGame = 1;
    string name1;
    RPG game1;

    cout << "welcome to the start of the game. Please enter your character's name:" << endl;
    cin >> name1;
    game1.setName(name1);
    cout << "WELCOME " << game1.getName() << "!!!!" << endl;
    cout << "Enter choice numbers to select. \nPress 0 at anytime to open menu" << endl;
    this_thread::sleep_for(chrono::seconds(1)); // delays output for 1 second
    
    game1.ClassSelect();
    cout << "\nWelcome to the starting area" << endl;
    cout << "Where would you like to go???" << endl;
    while(endGame==true)
    {
    game1.Menu();
    }
    return 0;
}
