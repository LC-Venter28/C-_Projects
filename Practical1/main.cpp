//Luan Venter 33759472

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <ctgmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "BMI Calculator" << endl;
    cout << "" << endl;
    cout << "1. Weight in Pounds, Height in Inches" << endl;
    cout << "2. Weight in Kilograms, Height in Meters" << endl;
    cout << "" << endl;
    std::cout << std::setprecision(1) << std::fixed;
    int chc;
    cout << "Choice: " ;
    cin >> chc;
    cout << "" << endl;
    if(chc == 1){
        float wghtp;
        cout << "Weight in Pounds?: " ;
        cin >> wghtp;
        cout << "" << endl;
        float hghtp;
        cout << "Height in Inches?: " ;
        cin >> hghtp;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Result.............." << endl;
        cout << "" << endl;
        cout << "Weight:       " << wghtp << " pounds " << endl;
        cout << "Height:       " << hghtp << " inches " << endl;
    float bmi = ((wghtp*703)/(hghtp*hghtp));
        cout << "BMI:          " << bmi << endl;
    if(bmi >= 30){
        cout << "Status:       Obese" << endl;
    }
    if((bmi < 30)and(bmi >= 25)){
        cout << "Status:       Overweight" << endl;
    }
    if((bmi < 25)and(bmi >= 18.5)){
        cout << "Status:       Normal" << endl;
    }
    if(bmi < 18.5){
        cout << "Status:       Underweight" << endl;
    }
    }
    if(chc == 2){
        float wghtk;
        cout << "Weight in Kilograms?: " ;
        cin >> wghtk;
        cout << "" << endl;
        float hghtk;
        cout << "Height in Meters?: " ;
        cin >> hghtk;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Result.............." << endl;
        cout << "" << endl;
        cout << "Weight:       " << wghtk << " kilograms " << endl;
        cout << "Height:       " << hghtk << " meters " << endl;
    float bmi = ((wghtk)/(hghtk*hghtk));
        cout << "BMI:          " << bmi << endl;
    if(bmi >= 30){
        cout << "Status:       Obese" << endl;
    }
    if((bmi < 30)and(bmi >= 25)){
        cout << "Status:       Overweight" << endl;
    }
    if((bmi < 25)and(bmi >= 18.5)){
        cout << "Status:       Normal" << endl;
    }
    if(bmi < 18.5){
        cout << "Status:       Underweight" << endl;
    }
    }
    return 0;
}
