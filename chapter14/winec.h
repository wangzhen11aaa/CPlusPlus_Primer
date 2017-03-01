//
// Created by wangzhen on 28/02/2017.
//

#ifndef CPP_BOOK_WINEC_H
#define CPP_BOOK_WINEC_H

#include "pairs.h"
#include <iostream>


class Wine
{
private:
    std::string label;
    int num_years;
    Pair<int, int> *par;
public:
    Wine() {};
    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);
    ~Wine() {delete [] par;}
    std::string & Label();
    void Show() const;
    void GetBottles();
    int sum() const;
};


#endif //CPP_BOOK_WINEC_H
