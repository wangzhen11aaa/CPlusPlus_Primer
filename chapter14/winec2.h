//
// Created by wangzhen on 01/03/2017.
//

#ifndef CPP_BOOK_WINEC2_H
#define CPP_BOOK_WINEC2_H

#include <iostream>
#include <valarray>
#include "pairs.h"

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine: private PairArray, private std::string
{
private:
    int years; // the number of years
public:
    Wine(const char *l , int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    ~Wine();
    void Show() const;
    void GetBottles();
    const std::string & Label() const;
    int Sum() const;
};


#endif //CPP_BOOK_WINEC2_H
