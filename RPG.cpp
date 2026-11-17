// RPG.cpp
// Team MAO
// 28/10/2026
#include "RPG.h"
#include <iostream>
using namespace std;

void RPG::Quit()
{
    int c = -1;
    cout << "Are you sure you want to Quit?" << endl;
    cout << "\n";
    cout << " 1:Yes \n2: No" << endl;
    while (c < 1 || c > 2)
    {
        cout << "=>";
        cin >> c;
        if (c == 1)
        {
            endGame = false;
        }
        else if (c == 2)
        {
            Menu();
        }
        else
        {
            cerr << "Invalid Choice Entered. Please enter again.\n=>";
        } // if invalid choice is entered
    }
}

void RPG::travelF()
{
    int c = -1;
}

void RPG::travelMenu()
{
    int c = -1;
    cout << "Where would you like to travel?" << endl;
    cout << "\n"; // new line
    cout << " 1: village \n2: forest \n3: blacksmith \n4: dungeon" << endl;
    while (c < 1 || c > 4)
    {
        cout << "=>";
        cin >> c;
        if (c == 1)
        {
            travelV();
        } // travel to village
        else if (c == 2)
        {
            travelF();
        } // travel to forest
        else if (c == 3)
        {
            travelB();
        } // travel to blacksmith
        else if (c == 4)
        {
            travelD();
        } // travel to dungeon
        else if (c == 0)
        {
            Menu();
        } // open menu
        else
        {
            cerr << "Invalid Choice Entered. Please enter again.\n=>";
        } // if invalid choice is entered
    }
}
RPG::RPG()
{
    cout << "default constructor" << endl;
}
void RPG::ClassSelect()
{
    int c = 0;
    cout << "What class would you like to pick?";
    cout << "\n"; // new line
    cout << "1: Fighter \n2: Assassin \n3: Mage \n4: Tank " << endl;
    upStat(5);
    while (c < 1 || c > 4)
    {
        cout << "=>";
        cin >> c;
        if (c == 1)
        {
            Class = "Fighter";
            upStr(9);
            upDex(5);
            upCon(5);
            upCast(3);
            upMana(3);
        }
        else if (c == 2)
        {
            Class = "Assassin";
            upStr(6);
            upDex(9);
            upCon(2);
            upCast(3);
            upMana(5);
        }
        else if (c == 3)
        {
            Class = "Mage";
            upStr(2);
            upDex(2);
            upCon(53);
            upCast(9);
            upMana(9);
        }
        else if (c == 4)
        {
            Class = "Tank";
            upStr(7);
            upDex(3);
            upCon(8);
            upCast(3);
            upMana(4);
        }
        // restart while loop
        else
        {
            cerr << "Invalid Choice Entered. Please enter again.\n=>";
        }
    }
}
void RPG::upgrade()
{
}
void RPG::Menu()
{
    int c = -1;
    cout << "MENU:" << endl;
    cout << "\n";
    cout << "1: Close menu \n2: View stats \n3: Travel \n4: Quit game " << endl;
    while (c < 1 || c > 4)
    {
        cout << "=>";
        cin >> c;
        if (c == 2)
        {
            displayStats();
        }
        else if (c == 3)
        {
            travelMenu();
        }
        else if (c == 4)
        {
            Quit();
        }
        // restart while loop
        else
        {
            cerr << "Invalid Choice Entered. Please enter again.\n=>";
        }
    }
}

void RPG::displayStats()
{
    int c = -1;
    cout << "Your are Level: " << getLevel()<< endl;
    cout << "Your stats are: " << endl;
    cout << "Strength: \t" << getStr() << endl;
    cout << "Dexterity: \t" << getDex() << endl;
    cout << "Constitution: \t" << getCon() << endl;
    cout << "Cast: \t \t" << getCast() << endl;
    cout << "Mana: \t \t" << getMana() << endl;
    cout << " \n";

    cout << "Would you like to upgrade: " << endl;
    cout << "\n";
    cout << " 1:Yes \n 2: No" << endl;
    while (c < 1 || c > 2)
    {
        cout << "=>";
        cin >> c;
        if (c == 1)
        {
            upgrade();
        }
        else if (c == 2)
        {
            Menu();
        }
        else
        {
            cerr << "Invalid Choice Entered. Please enter again.\n=>";
        } // if invalid choice is entered
    }
}
