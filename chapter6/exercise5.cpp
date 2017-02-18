//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>

int main(void)
{
    using namespace std;

    float income;
    cout << "Enter your income (non-numeric or negative number to terminate input): ";
    cin >> income;
    while (!cin.fail() && income > 0)
    {
        if (income <= 5000)
            cout << "No tax under 5000 \n";
        else if (income > 5000 && income <= 15000)
            cout << "Your income is " << income << ", tax is " << (income - 5000)* 0.10 << endl;
        else if (income > 15000 && income <= 35000)
            cout << "Your income is " << income << ", tax is " << 10000 * 0.10 + (income - 10000 - 5000) * 0.15 << endl;
        else
            cout << "Your income is " << income << ", tax is " << 10000 * 0.10 + (20000) * 0.15  + (income - 20000 - 10000 - 5000) * 0.20 << endl;
        cin >> income;
    }
    return 0;
}