//Luan Venter 33759472

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

string getClass(int clss){
    string uClass;

    switch(clss){
    case 1:
        uClass = "Rogue";
        break;
    case 2:
        uClass = "Warrior";
        break;
    case 3:
        uClass = "Mage";
        break;
    default:
        uClass = "Invalid Number";

    }

    return uClass;

}

int main()
{
    cout << "Choose your class: " << endl;
    cout << "1 for Rogue" << endl;
    cout << "2 for Warrior" << endl;
    cout << "3 for Mage" << endl;
    cout << "" << endl;
    cout << "Enter your value: ";
    int clss;
    cin >> clss;
    cout << "" << endl;
    cout << "Your stats are: " << endl;
    srand((unsigned) time(NULL) + 1);
    int aglt;
    aglt = (rand() % 10) + 1;
    cout << "Agility: " << aglt << endl;
    srand((unsigned) time(NULL) + 2);
    int strngth;
    strngth = (rand() % 10) + 1;
    cout << "Strength: " << strngth << endl;
    srand((unsigned) time(NULL));
    int intllct;
    intllct = (rand() % 10) + 1;
    cout << "Intellect: " << intllct << endl;
    cout << "" << endl;
    cout << "You have picked " << getClass(clss) << endl;

    if((aglt >= 6)and(clss == 1)){
        cout << "Your Agility is high enough to slay the Dragon!" << endl;
    }
    if((aglt < 6)and(clss == 1)){
        cout << "Your Agility was too low to defeat the Dragon!" << endl;
    }
    if((strngth < 6)and(clss == 2)){
        cout << "Your Strength is too low you, need more experience" << endl;
    }
    if((strngth >= 6)and(clss == 2)){
        cout << "Your Strength was high enough to break through the Bandit Camp Gate!" << endl;
    }
    if((intllct >= 6)and(clss == 3)){
        cout << "Your Intellect is high enough to solve the riddle!" << endl;
    }
    if((intllct < 6)and(clss == 3)){
        cout << "Your Intellect is too low to solve the riddle" << endl;
    }

    return 0;
}
