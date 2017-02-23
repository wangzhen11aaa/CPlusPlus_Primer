//
// Created by wangzhen on 23/02/2017.
//
#include <iostream>
#include "plorg.h"

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    Plorg one;
    one.show();
    one.change_ci(2.0);
    one.show();
    return 0;
}
