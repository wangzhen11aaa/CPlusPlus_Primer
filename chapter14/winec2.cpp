//
// Created by wangzhen on 01/03/2017.
//

#include "winec2.h"
#include <iostream>
using std::string;

Wine::Wine(const char *l, int y, const int yr[], const int bot[]):
        PairArray(ArrayInt(y), ArrayInt(y)) , string(l)
{
    years = y;
    for (int i = 0; i < years; ++i)
    {
        PairArray::first()[i] = yr[i];
        PairArray::second()[i] = bot[i];
    }
}

Wine::Wine(const char *l, int y):PairArray(ArrayInt(y), ArrayInt(y)), string(l)
{
   years = y;
}

Wine::~Wine()
{

}

void Wine::Show() const
{
    using std::cout;
    using std::endl;
    cout << "Wine :" << Label() << endl;
    for(int i = 0; i < years; ++i)
    {
        cout << PairArray::first()[i] << "\t";
        cout << PairArray::second()[i] << endl;
    }
}

const std::string & Wine::Label() const
{
    return (const string &)(*this);
}

void Wine::GetBottles()
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "Enter " << Label() << " data for " << years << " year(s):\n";
    int input;
    for (int i = 0; i < years; i++)
    {
        cout << "Enter year: ";
        cin >> input;
        PairArray::first()[i] = input;
        cout << "Enter bottles for that year: ";
        cin >> input;
        PairArray::second()[i] = input;
    }
}

int Wine::Sum() const
{
    return PairArray::second().sum();
}
