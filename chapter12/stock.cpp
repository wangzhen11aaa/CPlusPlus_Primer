//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include <cstring>
#include "stock.h"


Stock::Stock() // default constructor
{
    __name = new char[1];
    __name[0] = '\0';
    __shares = 0;
    __share_val = 0.0;
    __total_val = 0.0;

}

Stock::Stock(const char * name, long n, double price)
{
    __name = new char[std::strlen(name) + 1];
    std::strcpy(__name, name);
    __shares = n;
    __share_val = price;
    this->set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
        << "Transaction is aborted";
    }
    else
    {
        __shares += num;
        __share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Numbers of shares sold can't be negative. "
        << "Transaction is aborted. \n";
    }
    else if(num > __shares)
    {
        std::cout << "You can't sell more than you have !"
        << "Transaction is aborted. \n";
    }
    else
    {
        __shares -= num;
        __share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    __share_val = price;
    set_tot();
}

std::ostream & operator<<(std::ostream &os, const Stock &s)
{
    os << "Compnay name : " << s.__name << ", shares :" <<  s.__shares << ", price per share : " << s.__share_val
    << ", total value : " << s.__total_val << std::endl;
    return os;
}

