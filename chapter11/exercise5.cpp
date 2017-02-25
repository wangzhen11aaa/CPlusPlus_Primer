//
// Created by wangzhen on 25/02/2017.
//
#include <iostream>
#include "Stonewt.h"

int main(void)
{
    Stonewt incognito = 275; //uses constructor to initialize
    Stonewt wolfe(287.5); // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8.0);

    std::cout << "The celebrity weighed ";
    std::cout << incognito << std::endl;
    std::cout << wolfe << std::endl;
    std::cout << taft << std::endl;

    return 0;

}
