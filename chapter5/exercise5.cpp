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

    int sales[12];
    int sum = 0;
    for (int i = 0; i < kmonths_num; ++i)
    {
        cout << "Input sales in " << months[i] << " :";
        cin >> sales[i];
        sum += sales[i];

    }

    cout << "Total sales in year is " << sum << endl;
}