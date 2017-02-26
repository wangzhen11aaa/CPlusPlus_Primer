//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include "stock.h"

int main(void)
{
    Stock fulffy_the_cat("NanoSmart", 20, 12.50);
    std::cout << fulffy_the_cat << std::endl;
    fulffy_the_cat.buy(15, 18.125);
    std::cout << fulffy_the_cat << std::endl;
    fulffy_the_cat.sell(400, 20.00);
    std::cout << fulffy_the_cat << std::endl;
    fulffy_the_cat.buy(300000, 40.125);
    std::cout << fulffy_the_cat << std::endl;
    fulffy_the_cat.sell(300, 200);
    std::cout << fulffy_the_cat << std::endl;

    return 0;
}
