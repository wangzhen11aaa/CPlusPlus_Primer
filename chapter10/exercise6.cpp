//
// Created by wangzhen on 23/02/2017.
//

#include <iostream>
#include "move.h"

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    Move one;
    Move two(1,1);
    Move &sum = one.add(two);
    sum.showMove();
    sum.reset();
    sum.showMove();
    delete &sum;
    return 0;
}