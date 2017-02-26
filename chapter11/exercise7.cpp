//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include "complex0.h"

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number (q to quit) \n";
    while (cin >> c)
    {
        cout <<  "c is " << c << '\n';
        cout << "complex conjugate is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c" << a + c << '\n';
        cout << "a - c" << a - c << '\n';
        cout << "a * c" << a * c << '\n';
        cout << "2 * c" << 2 * c << '\n';
        cout << "Enter a complex number (q to quit): \n";
    }
    cout << "Done! \n";
    return 0;
}