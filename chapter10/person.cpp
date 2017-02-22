//
// Created by wangzhen on 22/02/2017.
//

#include <iostream>
#include <cstring>
#include "person.h"


Person::Person(const std::string &ln, const char * fn){
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::show() const
{
    std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const {
    std::cout << lname << ", " << fname << std::endl;
}
