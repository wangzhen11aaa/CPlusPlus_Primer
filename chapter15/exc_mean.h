//
// Created by wangzhen on 05/03/2017.
//

#ifndef CPP_BOOK_EXC_MEAN_H
#define CPP_BOOK_EXC_MEAN_H

#include <iostream>
#include <stdexcept>
#include <cmath>

class bad_hmean: public std::logic_error
{
public:
    bad_hmean(): std::logic_error("hmean() invalid arguments: a = -b\n") {} //string to be displayed for what method
};

class bad_gmean: public std::logic_error
{
public:
    bad_gmean(): std::logic_error("gmean() arguments should be > =0 \n") {}// string to be displayed for what() method.
};

#endif