//
// Created by wangzhen on 22/02/2017.
//

#include <iostream>
#include "sale.h"

int main(void)
{
    using SALES::Sales;
    Sales one;
    double ar[4] = {1.0, 2.0, 3.0, 4.0};
    Sales two(ar, 4);
    two.showSales();
    Sales one_re = one.setSales();
    one_re.showSales();

}