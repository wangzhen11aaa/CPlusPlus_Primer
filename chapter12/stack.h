//
// Created by wangzhen on 27/02/2017.
//

#ifndef CPP_BOOK_STACK_H
#define CPP_BOOK_STACK_H

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10}; //constant specific to class
    Item * __pitems; // holds back items
    int __size; // number of elements in stack
    int __top; // index for top stack item
public:
    Stack (int n = MAX);
    Stack (const Stack &st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;

    // push() returns false if the stack already is full, true otherwise
    bool push(const Item &item); // add item to stack
    // pop() returns false if the stack already is empty, true otherwise
    bool pop(Item & item); // pop top into item
    Stack & operator=(const Stack &st);

};

#endif //CPP_BOOK_STACK_H
