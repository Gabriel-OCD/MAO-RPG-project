//RPG.cpp
//Team MAO
//28/10/2026
#include "RPG.h"
#include <string>
#include <iostream>
using namespace std;

bool RPG::Quit()
{
    int c = -1;
    cout<<"Are you sure you want to Quit?"<<endl;
    cout<<" 1:Yes                  2: No"<<endl;
    while(c<1 || c>2){
    cout<<"=>";cin>> c;
    if (c==1){return 0;}
    else if (c==2){}
    else {cerr<<"Invalid Choice Entered. Please enter again.\n=>";} // if invalid choice is entered
    }
  
}

void RPG::travelF()
{
    int c = -1;


}

void RPG::travelMenu()
{
    int c=-1;
    cout<<"Where would you like to travel?"<< endl;
    cout<< " 1: village             2: forest"<<endl;
    cout<< " 3: blacksmith          4: dungeon"<<endl;
    
    while(c<1 || c>4)
    {
    cout<<"=>";cin>> c;
        if(c==1)
            {travelV();}        //travel to village
        else if(c==2)
            {travelF();}        //travel to forest
        else if(c==3)
            {travelB();}        //travel to blacksmith
        else if(c==4)
            {travelD();}        //travel to dungeon
        else if(c==0)
            {Menu();}           //open menu
        else
            {cerr<<"Invalid Choice Entered. Please enter again.\n=>";} // if invalid choice is entered
    }
}
RPG::RPG()
{
    cout << "default constructor" << endl;
}
void RPG::Menu()
{
    int c=-1;
    cout<< "MENU:"<<endl;
    cout<< " 1: Close menu          2:View stats"<<endl;
    cout<< " 3: Travel              4:Quit game"<<endl;
    while(c<1 || c>4)
    {
    cout<<"=>";cin>> c;
        if(c==2)
            {//displayStats();
                }
        else if(c==3)
            {travelMenu();}
        else if(c==4)
            {Quit();}
        //restart while loop
        else
            {cerr<<"Invalid Choice Entered. Please enter again.\n=>";}
    }
}
