//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>
#include <string>

int main(void)
{
    const int kmonths_num = 12;
    using namespace std;
    string months[kmonths_num] = {"January", "February", "March", "April", "March", "June", "July", "August", "September"
            , "October",  "November", "December"};

    int sales[3][kmonths_num];
    int sum = 0;
    for (int year = 0; year < 3; ++year)
    {
        for (int i = 0; i < kmonths_num; ++i)
        {
            cout << "Input sales in month" << year << "/" << months[i] << " :";
            cin >> sales[year][i];
            sum += sales[year][i];

        }
    }

    cout << "Total sales in year is " << sum << endl;
}