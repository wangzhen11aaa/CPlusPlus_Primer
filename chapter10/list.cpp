//
// Created by wangzhen on 23/02/2017.
//

#include <iostream>
#include "list.h"

bool List::additem(Item &item) {
    if (isfull())
        return false;
    else {
        __items[__cursor_index++] = item;
        return true;
    }
}
void List::iter() const {
    for (int i = 0; i < __cursor_index; ++i)
        std::cout << __items[i] << "\t";
    std::cout << std::endl;
}