//Luan C Venter

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int Val;
    int i;
    cout << "How many elements should be stored in the array: ";
    cin >> Val;
    int Arr[Val];
    int *ptr = Arr;
    for(int i = 0; i < Val; i++){
        cout << "Enter the value for element at index " << i << ": ";
        cin >> *(ptr + i);
    }
    int minval = *(ptr + i);
    for(i = 1; i < Val; i++){
        if(*(ptr + i) < minval){
            minval = *(ptr + i);
        }
    }
    int maxval = *(ptr + i);
    for(i = 1; i < Val; i++){
        if(*(ptr + i) > maxval){
            maxval = *(ptr + i);
        }
    }

    cout << "" << endl;
    cout << "Max:   " << maxval << endl;
    cout << "Min:   " << minval << endl;
    cout << "Range: " << maxval - minval << endl;



    return 0;
}
