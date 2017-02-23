//
// Created by wangzhen on 23/02/2017.
//

#include <iostream>

#ifndef CPP_BOOK_LIST_H
#define CPP_BOOK_LIST_H
typedef int Item;
class List
{
private:
    static const int Len = 20; //List length.
    Item __items[Len];
    int __cursor_index;
public:
    List() {__cursor_index = 0;}
    bool isempty() const {return __cursor_index == 0;}
    bool isfull() const {return __cursor_index == Len;}
    bool additem(Item &item);
    void iter() const;
};

#endif //CPP_BOOK_LIST_H
