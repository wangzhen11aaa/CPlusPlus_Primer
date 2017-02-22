//
// Created by wangzhen on 22/02/2017.
//

#include <iostream>
#include "bank_account.h"

int main(void)
{
    using std::cout;

    Bankaccount Mr_w("Thomas", "888666", 1000000000.0);
    Mr_w.display_name();
    if (Mr_w.withdraw(1000.0))
        std::cout << "Withdraw successed \n";
    if(Mr_w.deposit(10000.0))
        std::cout << "Deposit successed \n";

    std::cout << "Balance is " << Mr_w.show_money() << std::endl;
}