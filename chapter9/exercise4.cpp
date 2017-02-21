//
// Created by wangzhen on 21/02/2017.
//

#include <iostream>
#include "sale.h"

int main()
{
    double ar[3] = {100, 200, 300};
    using SALES::Sales;
    Sales s1, s2;

    SALES::setSales(s1, ar, 3);
    SALES::showSales(s1);

    SALES::setSales(s2);
    SALES::showSales(s2);

    return 0;
}