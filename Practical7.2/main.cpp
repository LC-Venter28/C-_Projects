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
    int temp;
    cout << "How many elements should be stored in the array: ";
    cin >> Val;
    int Arr[Val];
    int *ptr = Arr;
    for(int i = 0; i < Val; i++){
        cout << "Enter the value for element at index " << i << ": ";
        cin >> *(ptr + i);
    }
    cout << "" << endl;
    for(i = 0; i < (Val - 1) / 2; i++){
        temp = Arr[Val - 1 -i];
        Arr[Val - 1 -i] = *(ptr + i);
        *(ptr + i) = temp;
    }
    cout << "Reversed Array: ";
    for(i = 0;i < Val; i++){
        cout << *(ptr + i) << " ";
    }
    cout << "" << endl;


    return 0;
}
