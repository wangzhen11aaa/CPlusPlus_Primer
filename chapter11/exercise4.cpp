//
// Created by wangzhen on 25/02/2017.
//

#include <iostream>
#include "mytime.h"

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    Time wedding(3, 50);
    Time waxing(2, 47);

    Time total;
    Time diff;
    Time adjusted;

    cout << "wedding time = ";
    wedding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time =";
    total = wedding + waxing;
    total.Show();
    cout << endl;

    diff = wedding - waxing;
    cout << "Wedding time - waxing time =";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;
    cout << "Adjusted work time = ";
    adjusted.Show();
    cout << endl;

    return 0;
}