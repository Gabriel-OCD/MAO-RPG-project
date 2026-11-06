//RPG.h
//Team MAO
//28/10/2026
#include <string>
using namespace std;

class RPG
{
    private:
    string name;
    int statPoints, Cstr, Cdex, Ccon, Ccast, Cmana;


    public:

    RPG();//default constructor
    // setter functions
    void setName(string newName){name = newName;}                           // set new character name
    void upStat(int statIncrease){statPoints = statPoints + statIncrease;}  // increase number of stat points 
    void upStr(int strUp){Cstr = Cstr + strUp;}                             //
    void upDex(int dexUp){Cdex = Cdex + dexUp;}                             //
    void upCon(int conUp){Ccon = Ccon + conUp;}                             //
    void upCast(int castUp){Ccast = Ccast + castUp;}                        //
    void upMana(int manaUp){Cmana = Cmana + manaUp;}                        //

    // getter functions
    string getName(){return name;}
    int getPoints(){return statPoints;}
    int getStr(){return Cstr;}
    int getDex(){return Cdex;}
    int getCast(){return Ccast;}
    int getMana(){return Cmana;}

    // menu functions
    void Menu();
    //void displayStats();
    bool Quit();
    
    // travelfunctions
    void travelMenu();
    void travelV(){}
    void travelF();
    void travelB(){}
    void travelD(){}

};
