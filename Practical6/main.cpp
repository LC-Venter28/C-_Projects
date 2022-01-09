#include <iostream>

using namespace std;

int main()
{
    char name[30][30];
    int j;
    int i;
    int age[4];
    int height[4];
    double time[4];
    int num = 1;


    cout << "   -=Welcome to the Durban July=-" << endl;
    cout << "=================================" << endl;
    for (num = 1; num <= 4; num++){
        cout << "Enter details of Horse #" << num << endl;
        cout << "=================================" << endl;
        cout << "Horse #" << num << " - Name: ";
        cin >> name[i];
        cout << "Horse #" << num << " - Age: ";
        cin >> age[i];
        cout << "Horse #" << num << " - Height: ";
        cin >> height[i];
        cout << "Horse #" << num << " - Time of last race: ";
        cin >> time[i];
        cout << "=================================" << endl;
        i++;
    }
    cout << "" << endl;
    cout << "" << endl;
    cout << "**************************************************************************************************" << endl;
    cout << "                                           Roster for next race" << endl;
    cout << "**************************************************************************************************" << endl;
    for(i = 0; i < 4; i++){
        cout << i + 1 << "    Name:     " << name[i] << "      Age: " << age[i] << "     years old " << "     Height: " << height[i] << " hands      " << " Time of last run: " << time[i] << " seconds" << endl;
    }

    cout << "" << endl;
    double min = time[0];
    for(i = 1; i < 4; i++){
        if(time[i] < min){
            min = time[i];
        }
    }
    cout << "***********************************************************" << endl;
    cout << "Race favourite has a last run time of " << min << " seconds" << endl;
    cout << "***********************************************************" << endl;




    return 0;
}
