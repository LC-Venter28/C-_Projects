//Luan C Venter

#include <iostream>

using namespace std;

struct Horse
{
    int height;
    int age;
    double time;
    char name[30];
};

int main()
{
    struct Horse perd[4];
    int i;

    cout << "   -=Welcome to the Durban July=-" << endl;

    for(int i = 0; i < 4; i++){

        int height;
        int age;
        double time;
        char name;
        int num = 0;

        cout << "==========================================" << endl;
        cout << "Enter details of horse #" << i + 1 << endl;
        cout << "==========================================" << endl;
        cout << "Horse #" << i + 1 << " - Name: ";
        cin >> perd[i].name;
        cout << "Horse #" << i + 1 << " - Age: ";
        cin >> perd[i].age;
        cout << "Horse #" << i + 1 << " - Height: ";
        cin >> perd[i].height;
        cout << "Horse #" << i + 1 << " - Time of last race: ";
        cin >> perd[i].time;

    }
    cout << "" << endl;
    cout << "********************************************************************************************" << endl;
    cout << "                                       Roster for next race" << endl;
    cout << "********************************************************************************************" << endl;
    for(i = 0; i < 4; i++){
        cout << i + 1 << ".  " <<  " Name: " << perd[i].name << "         Age: " << perd[i].age << " years old      Height: " << perd[i].height << " hands      Time of Last Run: " << perd[i].time << " seconds" << endl;
    }
    cout << "" << endl;
    double min = perd[0].time;
    for(i = 1; i < 4; i++){
        if(perd[i].time < min){
            min = perd[i].time;
        }
    }
    cout << "************************************************************************" << endl;
    cout << "Race favourite has a last run time of " << min << " seconds" << endl;
    cout << "************************************************************************" << endl;

    return 0;
}
