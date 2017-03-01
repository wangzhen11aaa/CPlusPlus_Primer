//
// Created by wangzhen on 01/03/2017.
//

#ifndef CPP_BOOK_WINEC_V2_H
#define CPP_BOOK_WINEC_V2_H
#include <valarray>
#include <iostream>
#include <string>

using std::valarray;
using std::pair;
using std::string;

typedef valarray<int> ArrayInt;
typedef pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
    string label;
    int years;
    PairArray pa;
public:
    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine (const char *l, int y);
    ~Wine() {}
    string &Label();
    void Show() const;
    void GetBottles();
    int Sum() const ;
};

#endif //CPP_BOOK_WINEC_V2_H
