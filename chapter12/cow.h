//
// Created by wangzhen on 26/02/2017.
//

#ifndef CPP_BOOK_COW_H
#define CPP_BOOK_COW_H

#include <iostream>

class Cow
{
private:
    char name[20];
    char * hobby;
    double weight;

public:
    Cow();
    Cow(const char *nm, const char *ho,double wt);
    Cow(const Cow  &c);
    ~Cow();
    Cow & operator=(const Cow &c);
    void ShowCow() const; // display all cow data
};


#endif //CPP_BOOK_COW_H
