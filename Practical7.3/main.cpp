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
    int temp = 0;
    cout << "How many elements should be stored in the array: ";
    cin >> Val;
    int Arr[Val];
    int *ptr = Arr;
    for(int i = 0; i < Val; i++){
        cout << "Enter the value for element at index " << i << ": ";
        cin >> *(ptr + i);
    }
    for(i = 0; i <= Val; i++){
        for(int j = 0; j <= Val - i; j++){
            if(Arr[j] > Arr[j + 1]){
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
    cout << "" << endl;
    cout << "Sorted array: ";
    for(int i = 1; i <= Val; i++){
        cout << *(ptr + i) << " ";
    }
    cout << "" << endl;







    return 0;
}
