//Luan Venter 33759472

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int lst = 0;
    char name[60][25];
    int loop = 1;
    int j = 0;
    int i;

    do
    {
        cout << "Enter Names (X to exit): ";
        cin.getline(name[j], sizeof name[j]);
        if((strcmp(name[j], "X") == 0) || (strcmp(name[j], "x") == 0)){
            loop = 0;
        }
        j++;
        lst++;

    }
    while(loop);
    cout << "" << endl;
    cout << "List of Names" << endl;
    cout << "" << endl;
    for(i = 0; i < lst - 1; i++){
        cout << name[i] << endl;
    }
    cout << "" << endl;
    cout << "Enter a Letter: ";
    char letterFind;
    cin >> letterFind;
    cout << "" << endl;
    cout << "Name that start with " << letterFind << endl;
    cout << "" << endl;
    for(i = 0; i < lst - 1; i++){
        cout << name[j] << endl;
    }


    return 0;
}
