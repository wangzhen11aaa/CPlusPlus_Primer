//
// Created by wangzhen on 23/02/2017.
//
#include <iostream>
#include "list.h"

int main(void)
{
    List emptylist;
    if (emptylist.isempty())
        std::cout << "List is empty \n";
    Item b = 1;
    emptylist.additem(b);
    Item a = 3;
    emptylist.additem(a);
    emptylist.iter();
    if (!emptylist.isfull())
        std::cout << "List is not full \n";
    return 0;
}
