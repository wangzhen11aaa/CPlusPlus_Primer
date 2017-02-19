//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    double (*pf[3]) (double a, double b) = {add, sub, mul};
    double x, y;
    cout << "Enter x, and y :";
    while (cin>>x && cin >> y)
    {
        cout << "Addition, Subversion , Multiplication \n ";
        for (int i = 0; i < 3; ++i)
            cout << pf[i](x, y) << endl;
    }
    return 0;

}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}
double mul(double x, double y)
{
    return x * y;
}