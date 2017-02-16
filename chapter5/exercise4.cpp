//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>

int main(void)
{
    using namespace std;

    float daphne_investment;
    cout << "Input the investment of Daphne: ";
    cin >> daphne_investment;

    float cleo_investment;
    cout << "Input the investment of Cleo: ";
    cin >> cleo_investment;

    float daphne_current_balance = daphne_investment;
    float cleo_current_balance = cleo_investment;

    int i;
    for(i = 1; daphne_current_balance >= cleo_current_balance; ++i)
    {
        daphne_current_balance += 0.1 * daphne_investment;
        cleo_current_balance += cleo_current_balance * 0.05;
    }

    cout << "Cleo's current_balance surpass Daphne's in " << i << " year \n";
    cout << "Cleo's balance is " << cleo_current_balance << endl;
    cout << "Daphne's balance is " << daphne_current_balance << endl;

    return 0;
}