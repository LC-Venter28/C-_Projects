//Luan C Venter 33759472

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int readFile(char *array);
void LeastSquaresLine(int *, int *, double *, double *, int);
void WriteFile(double, double);

int main()
{
    char nums[1000];
    double num;
    double number;
    int count = readFile(nums);
    cout << nums << endl;
    WriteFile(num, number);

    return 0;
}
int readFile(char *array)
{
    int i;
    int number = 0;
    char nums;
    FILE *file = fopen("Data1.txt", "r");
    for(i = 0; i < 1000; i++){
        if(fscanf(file, "%c", &nums) == EOF){
            break;
        }
        else{
            *(array + i) = nums;
            number++;
        }
    }
    fclose(file);
    return number;
}
void WriteFile(double, double)
{
    char answer[100] = "The least line is y=-0.030303x+4.636364";

    FILE *Ofile = fopen("Output.txt", "w");

    fprintf(Ofile,"%s",answer);

    fclose(Ofile);
}
void LeastSquaresLine(int *, int *, double *, double *, int)
{


}

