//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>
#include <array>

int main(void)
{
    using namespace std;
    array<long double, 101> factorial_array;
    factorial_array.at(0) = 0;
    factorial_array.at(1) = 1;

    for (int i = 2; i <= 100; ++i) {
        factorial_array.at(i) = i * factorial_array.at(i - 1);
        cout << "factorial[" << i << "]" << factorial_array.at(i) << '\t';
    }

    cout << "100! = " << factorial_array.at(100) << endl;

    return 0;
}
