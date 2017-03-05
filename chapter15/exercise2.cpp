//
// Created by wangzhen on 05/03/2017.
//

#include "exc_mean.h"

// function prototypes

double hmean(double a, double b) throw(bad_hmean); // for function gets personal exception type
double gmean(double a, double b) throw(bad_gmean);

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    double x, y, z;

    cout << "Enter two numbers :";
    while (cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << "Harmoic mean of " << x << " and " << y << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x,y) << endl;
        }
        catch (bad_gmean &bg) // start of catch block
        {
            cout << bg.what();
            cout << "try again \n";
            cin.clear();
            continue;
        }
        catch (bad_hmean &bh)
        {
            cout << bh.what();
            cout << "try again \n";
            //cin.clear();
            continue;
        }
    }
    cout << "Bye !\n";
    //system("pause");
    return 0;
}


double hmean(double a, double b) throw(bad_hmean)
{
    if (a == -b)
        throw bad_hmean();
    return 2.0 * a * b / (a + b);
}
double gmean(double a, double b) throw(bad_gmean)
{
    if (a * b < 0)
        throw bad_gmean(); // if invalid arguments throw the exception
    return std::sqrt(a * b);
}
