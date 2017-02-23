//
// Created by wangzhen on 22/02/2017.
//


#include "customer.h"

#ifndef CPP_BOOK_STACK_H
#define CPP_BOOK_STACK_H

typedef customer Item;

class Stack{
private:
    enum {MAX = 10}; //constant specific to class
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    //push() returns false if stack is already full, true otherwise.
    bool push(const Item &item); // add item to stack
    //pop () returns false if stack already is empty, true otherwise.
    bool pop(Item &item); //Pop top into item;
};

#endif //CPP_BOOK_STACK_H
