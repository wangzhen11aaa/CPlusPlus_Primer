//
// Created by wangzhen on 27/02/2017.
//

#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
     __pitems = new Item[n];
     __size = n;
     __top = 0;
}

Stack::Stack(const Stack &st)
{
     __pitems = new Item[st.__size];
     __size = st.__size;
     for (int i = 0; i < __top; ++i)
          __pitems[i] = st.__pitems[i];
     __top = st.__top;
}

Stack::~Stack()
{
     delete [] __pitems;
}

bool Stack::isfull() const
{
     return __size == __top;
}

bool Stack::isempty() const
{
     return __top == 0;
}

bool Stack::push(const Item &item)
{
     if (isfull())
          return false;
     else
     {
          __pitems[__top++] = item;
          return true;
     }
}

bool Stack::pop(Item &item)
{
     if (isempty())
          return false;
     else
     {
          item = __pitems[--__top];
          return true;
     }
}

Stack & Stack::operator=(const Stack &st)
{
     delete [] __pitems; // clear old data
     __pitems = new Item[st.__size];
     for (int i = 0; i < __top; ++i)
          __pitems[i] = st.__pitems[i];
     __top = st.__top;
     __size = st.__size;

     return *this;
}