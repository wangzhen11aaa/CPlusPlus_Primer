//
// Created by wangzhen on 22/02/2017.
//
#include <iostream>

#ifndef CPP_BOOK_BANK_ACCOUNT_H_H
#define CPP_BOOK_BANK_ACCOUNT_H_H

class Bankaccount
{
private:
    std::string __depositor_name;
    std::string __account_number;
    float __balance;
public:
    //Bankaccount(); Empty bank account means nothing.
    Bankaccount(std::string depositor_name, std::string account_number, float balance);
    const std::string & display_name() const;
    const float & show_money() const;
    bool deposit(float m);
    bool withdraw(float m);
};


#endif //CPP_BOOK_BANK_ACCOUNT_H_H
