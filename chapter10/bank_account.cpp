//
// Created by wangzhen on 22/02/2017.
//

#include <iostream>
#include "bank_account.h"

Bankaccount::Bankaccount(std::string depositor_name, std::string account_number, float balance)
{
    __depositor_name = depositor_name;
    __account_number = account_number;
    __balance = balance;
}

const std::string & Bankaccount::display_name() const {
    return __depositor_name;
}

const float & Bankaccount::show_money() const {
    return __balance;
}

bool Bankaccount::deposit(float m) {
    if (m < 0)
        return false;
    else {
        __balance += m;
        return true;
    }

}

bool Bankaccount::withdraw(float m) {
    if (m < 0)
        return false;
    else{
        if (__balance - m < 0)
            return false;
        else {
            __balance -= m;
            return true;
        }
    }
}

