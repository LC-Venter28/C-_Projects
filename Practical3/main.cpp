//Luan Venter 33759472

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <stdbool.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    const float pr_5k = 65.0f;
    const float pr_10k = 100.0f;
    const float pr_15k = 150.0f;
    const float non_memb_incr = 0.25f;
    const float non_memb_incr_15k = 1.0f;

    double sum_5k = 0.00;
    double sum_10k = 0.00;
    double sum_15k = 0.00;
    double sum_total = 0.00;

    int num_5k = 0;
    int num_10k = 0;
    int num_15k = 0;
    int num_par = 0;
    int num_reg = 0;
    static int objCnt;
    int tot_Part = 0;
    int dstnc;
    int tot_Mem = 0;

    bool reg = true;
    bool memb;
    char regYN;
    char clubM;

    std::stringstream s;


    while (reg)
    {
        fflush(stdin);
        cout << "Do you wish to register an new participant? (Y or N): ";
        cin >> regYN;
        tot_Part++;


        switch (toupper(regYN))
        {
        case 'Y':
            cout << "Is the participant a club member? (Y or N): ";
            cin >> clubM;
            memb = toupper(clubM) == 'Y';
            if(clubM == 'y'){
                tot_Mem++;
            }

            cout << "Enter distance ( 5 / 10 / 15 ): ";
            cin >> dstnc;
            cout << "" << endl;
            switch (dstnc)
            {
            case 5:
                num_5k++;
                num_par++;

                if(clubM == 'y'){
                    num_reg++;
                    sum_5k += pr_5k;
                }
                else{
                    sum_5k += pr_5k * (1 + non_memb_incr);
                }
                break;

            case 10:
                num_10k++;
                num_par++;

                if(clubM == 'y'){
                    num_reg++;
                    sum_10k += pr_10k;
                }
                else{
                    sum_10k += pr_10k * (1 + non_memb_incr);
                }
                break;

            case 15:
                num_15k++;
                num_par++;

                if (clubM == 'y'){
                    num_reg++;
                    sum_15k += pr_15k;
                }
                else{
                    sum_15k += (pr_15k * (1 + non_memb_incr_15k));
                    break;
                }

            default:
                cout << "Invalid Distance" << endl;
                cout << "" << endl;
            }
            break;
        case 'N':
            reg = false;
            cout << "" << endl;
            cout << "Total number of participants: " << tot_Part - 1 << endl;
            cout << "Total number of club members registered: " << tot_Mem << endl;
            cout << "" << endl;
            break;

        default:
            cout << "" << endl;
            cout << "Invalid Answer" << endl;
            cout << "" << endl;
        }
    }
    sum_total = sum_5k + sum_10k + sum_15k ;
    cout << "Total number of participants per distance: " << endl;
    cout << "5km:           "  << num_5k << "         R " << sum_5k << endl;
    cout << "10km:          " << num_10k << "         R " << sum_10k << endl;
    cout << "15km:          " << num_15k << "         R " << sum_15k << endl;
    cout << "" << endl;
    cout << "Total income:      R " << sum_total << endl;
    cout << "Category with Highest income:" << endl;


    return 0;
}
