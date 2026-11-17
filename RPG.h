//RPG.h
//Team MAO
//28/10/2026
#include <string>
using namespace std;

class RPG
{
    private:
    string name, Class;

    int level=1, statPoints=5, Cstr=0, Cdex=0, Ccon=0, Ccast=0, Cmana=0;
    bool endGame=1;
    public:

    RPG();//default constructor
    // setter functions
    void setName(string newName){name = newName;}                           // set new character name
    void ClassSelect();


    void upgrade(); //function to upgrade stats
    void upStat(int statIncrease){statPoints = statPoints + statIncrease;}  // increase number of stat points 
    void upStr(int strUp){Cstr = Cstr + strUp;}                             //
    void upDex(int dexUp){Cdex = Cdex + dexUp;}                             //
    void upCon(int conUp){Ccon = Ccon + conUp;}                             //
    void upCast(int castUp){Ccast = Ccast + castUp;}                        //
    void upMana(int manaUp){Cmana = Cmana + manaUp;}                        //

    // getter functions
    string getName(){return name;}
    string getClass(){return Class;}
    bool getEndGame(){return endGame;}
    int getLevel(){return level;}
    int getPoints(){return statPoints;}
    int getStr(){return Cstr;}
    int getDex(){return Cdex;}
    int getCon(){return Ccon;}
    int getCast(){return Ccast;}
    int getMana(){return Cmana;}

    // menu functions
    void Menu();
    void displayStats();
    void Quit();
    
    // travelfunctions
    void travelMenu();
    void travelV(){}
    void travelF();
    void travelB(){}
    void travelD(){}

};

/*
while loop for copy & paste


 cout<<"=>";cin>> c;
        if(c==1)
        {

        }
        else if(c==2)
        {
            
        }
        else if(c==3)
        {

        }

        else if(c==4)
        {

        }

        //restart while loop
        else
            {cerr<<"Invalid Choice Entered. Please enter again.\n=>";}
    }



*/
