//Luan C Venter

#include <iostream>
#include <math.h>
#include <cmath>
#include <conio.h>

using namespace std;

double std_dev(double arr[]);
void display_arr(double arr[]);
void delete_index(double arr[]);
double new_std_dev(double arr[]);

int main()
{
    int i;
    double arr[] = {11.2, 2.4, 3.13, 16.4, 5.8, 9.22, 4.9, 10.5, 6.5, 2.99};

    display_arr(arr);
    cout << "" << endl;
    cout << "" << endl;
    double old_stdev = std_dev(arr);
    delete_index(arr);
    cout << "" << endl;
    cout << "" << endl;
    cout << "The Standard Deviation of the array was: " << old_stdev << endl;
    cout << "The new Standard Deviation is: " << new_std_dev(arr) << endl;

    return 0;
}
double std_dev(double arr[])
{
    double sum = 0.0;
    double avg;
    double std_Dev = 0.0;
    int i;
    for(i = 0; i < 10; i++){
        sum += arr[i];
    }
    avg = sum / 10;
    for(i = 0; i < 10; i++)
        std_Dev += pow(arr[i] - avg, 2);

    return sqrt(std_Dev / 10);
}

double new_std_dev(double arr[])
{
    double sum = 0.0;
    double avg;
    double new_std_Dev = 0.0;
    int i;
    for(i = 0; i < 9; i++){
        sum += arr[i];
    }
    avg = sum / 9;
    for(i = 0; i < 9; i++)
        new_std_Dev += pow(arr[i] - avg, 2);

    return sqrt(new_std_Dev / 9);
}
void display_arr(double arr[])
{
    int i;
    cout << "" << endl;
    for(i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}
void delete_index(double arr[])
{
    int j;
    int i;
    cout << "Enter the index to remove (0-9): ";
    int index_remove;
    cin >> index_remove;
    cout << "" << endl;
    cout << "Removed the value " << "'" << arr[index_remove] << "'" << endl;
    cout << "" << endl;
    for(j = 0; j < 10; j++){
        if(arr[j] == arr[index_remove]){
            for(int i = j; i < (10 - 1); i++){
                arr[i] = arr[i + 1];
            }
        }
    }
    for(j = 0; j < (10 - 1); j++){
        cout << arr[j] << " ";
    }
}

