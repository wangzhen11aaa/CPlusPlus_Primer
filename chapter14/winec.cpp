//
// Created by wangzhen on 28/02/2017.
//
#include <iostream>
#include "winec.h"


Wine::Wine(const char *l, int y, const int *yr, const int *bot)
{
    label = l;
    num_years = y;
    par = new Pair<int, int>[y];
    for (int i = 0; i < y; ++i)
        par[i] = Pair<int, int>(yr[i], bot[i]);
    //for (int i = 0; i < y; ++i)
     //   std::cout << par[i].first() << std::endl;

}

Wine::Wine(const char *l, int y)
{
    label = l;
    num_years = y;
    par = new Pair<int, int> [y];
}

std::string & Wine::Label()
{
    return label;
}

void Wine::Show() const
{
    std::cout << "Wine :" << label << std::endl;
    std::cout << "Year \t" << "Bottles \n";
    for (int i = 0; i < num_years; ++i)
        std::cout << par[i].first() << "\t" << par[i].second() << std::endl;
}
void Wine::GetBottles()
{
    int year, bot;
    for (int i = 0; i < num_years; ++i)
    {
        std::cout << "Enter year : ";
        std::cin >> year;
        std::cout << "Enter bottles for that year : ";
        std::cin >> bot;
        par[i] = Pair<int, int>(year, bot);
    }
}

int Wine::Sum() const
{
    int sum = 0;
    for (int i = 0 ; i < num_years; ++i)
        sum += par[i].second();
    return sum;
}