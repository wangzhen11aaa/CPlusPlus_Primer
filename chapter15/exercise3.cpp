//
// Created by wangzhen on 05/03/2017.
//

#include "excpt.h"
#include <iostream>
#include <cmath>
//function prototypes
double hmean(double a, double b) throw(abs_bad);
double gmean(double a, double b) throw(abs_bad);

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;
    cout << "Input two numbers \n";
    while (cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
            z = gmean(x, y);
            cout << "Geometric mean of " << x << " and " << y << " is " << z << endl;
        }
        catch(abs_bad & abc)
        {
            abc.mesg();
            cout << "Error, input again \n";
            continue;
        }
    }

}
double hmean(double a, double b) throw(abs_bad)
{
    if (a == -b)
        throw bad_hmean(a, b);
    return 2 * a * b /(a + b);
}

double gmean(double a, double b) throw(abs_bad)
{
    if (a * b < 0)
        throw bad_gmean(a, b);
    else
        return std::sqrt(a * b);

}
