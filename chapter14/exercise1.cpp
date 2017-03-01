//
// Created by wangzhen on 28/02/2017.
//

//#include "winec.h"
#include "winec_v2.h"
#include <iostream>

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine : ";
    char lab[50];

    cin.getline(lab, 50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab, yrs); // store label, years, give arrays yrs elements
    holding.GetBottles();
    holding.Show();

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};

    // create new object, initialize using data in arrays y and b
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();

    cout << "Total bottles for " << more.Label()
            << ": " << more.Sum() << endl;
    cout << "Bye \n";
    return 0;
}