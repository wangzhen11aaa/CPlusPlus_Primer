//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <array>

using namespace std;

int main(void)
{
    array<float, 3> time_array;
    cout << "Input three time for the 40-yd dash \n";
    cin >> time_array.at(0);
    cin >> time_array.at(1);
    cin >> time_array.at(2);

    cout << "Average dash time is " << (time_array.at(0) + time_array.at(1) + time_array.at(2)) / 3 << endl;
}