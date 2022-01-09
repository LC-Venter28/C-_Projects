//Luan C Venter

#include <iostream>
#include <stdio.h>

using namespace std;

int readFile(char *array);
void printFile(char *array, int);
void print_date(char *array, int);

int main()
{
    char nums[300];
    int count = readFile(nums);
    printFile(nums, count);
    print_date(nums, count);

    return 0;
}

int readFile(char *array)
{
    int i;
    int count = 0;

    FILE *file = fopen("idnumbers.txt", "r");
    cout << "List of ID numbers: " << endl;
    char characters;
    for(i = 0; i < 300; i++){
        if(fscanf(file, "%c", &characters) == EOF){
            break;
        }
        else{
            *(array + i) = characters;
            count++;
        }
    }
    return count;
}
void printFile(char *array, int count)
{
    int i;

    for(i = 0; i < count; i++){
        cout << *(array + i);
    }
    cout << "" << endl;
}
void print_date(char *array, int count)
{
    int i;
    cout << "" << endl;

    for(i = 0; i < count; i++){
        if(*(array + i) == '_'){
            char first_char[3] = {*(array + i + 1), *(array + i + 2)};
            char month[3] = {*(array + i + 3), *(array + i + 4)};
            char day[3] = {*(array + i + 5), *(array + i + 6)};
            int year = atoi(first_char);
            if(year <= 20){
                year += 2000;
            }
            else{
                year += 1900;
            }
            cout << "Date Born: " << year << "/" << month << "/" << day << endl;
        }
    }
}
