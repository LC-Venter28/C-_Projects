// Luan Venter 33759472

#include <iostream>

using namespace std;

int main()
{
    int ValNum;
    int i;
    cout << "Enter the number of values to enter: ";
    cin >> ValNum;
    int ValArr[ValNum];
    cout << "" << endl;
    for(int i = 0; i < ValNum; i++){
        cout << "Enter the value for array value " << i << ": ";
        cin >> ValArr[i];
    }
    cout << "" << endl;
    for(int i = 0; i < ValNum; i++){
        cout << "Value of " << i << " is " << ValArr[i] << endl;
    }
    cout << "" << endl;
    int RemoveVal;
    cout << "Enter the index of the value you wish to remove: ";
    cin >> RemoveVal;
    RemoveVal--;
    cout << "" << endl;
    if (RemoveVal >= ValNum +1){
        cout << "Invalid" << endl;
    }
    else{
        for(i = RemoveVal; i < ValNum; i++)
            ValArr[i] = ValArr[i + 1];
        for(i = 0; i < ValNum - 1; i++)
            cout << "Value of " << i << " is " << ValArr[i] << endl;
    }


    return 0;
}
