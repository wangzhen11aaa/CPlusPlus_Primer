//
// Created by wangzhen on 01/03/2017.
//

#include "winec_v2.h"


Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
    label = l;
    years = y;

    pa.first.resize(y);
    pa.second.resize(y);

    for (int i = 0; i < years; ++i)
    {
        pa.first[i] = yr[i];
        pa.second[i] = bot[i];
    }
}

Wine::Wine(const char *l, int y)
{
    label = l;
    years = y;
    pa.first.resize(y);
    pa.second.resize(y);
}

string & Wine::Label()
{
    return label;
}

void Wine::Show() const
{
    std::cout << "Wine :" << label << std::endl;
    std::cout << "Year \t" << "Bottles \n";
    for (int i = 0; i < years; ++i)
        std::cout << pa.first[i] << "\t" << pa.second[i] << std::endl;
}
void Wine::GetBottles()
{
    int year, bot;
    for (int i = 0; i< years; ++i)
    {
        std::cout << "Enter year : ";
        std::cin >> year;
        std::cout << "Enter bottles for that year : ";
        std::cin >> bot;
        pa.first[i] = year;
        pa.second[i] = bot;
    }
}

int Wine::Sum() const
{
    return pa.second.sum();
}
