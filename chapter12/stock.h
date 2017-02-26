//
// Created by wangzhen on 26/02/2017.
//

#ifndef CPP_BOOK_STOCK_H
#define CPP_BOOK_STOCK_H

#include <iostream>

class Stock
{
private:
    char * __name;
    long __shares;
    double __share_val;
    double __total_val;
    void set_tot() {__total_val = __shares * __share_val;}
public:
    Stock();
    Stock(const char * name, long n, double pr);
    //void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);

    // friend function overload operator function.
    friend std::ostream & operator<<(std::ostream &os, const Stock &s);
};
#endif //CPP_BOOK_STOCK_H
