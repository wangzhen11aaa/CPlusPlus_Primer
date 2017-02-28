//
// Created by wangzhen on 28/02/2017.
//

#include <iostream>
#include "classic2.h"

//default constructor
Classic::Classic():Cd()
{
    primary_work = new char[1];
    primary_work[0] = '\0';
}

// constructor
Classic::Classic(const char *pw, const char *s1, const char *s2, int n, double x):
        Cd(s1, s2, n, x){
    primary_work = new char[std::strlen(pw) + 1];
    std::strcpy(primary_work, pw);
}

// copy constructor
Classic::Classic(const Classic &c):Cd(c) // invoke copy constructor of base class
{
    primary_work = new char[std::strlen(c.primary_work) + 1];
    std::strcpy(primary_work, c.primary_work);
}
// destructor
Classic::~Classic()
{
    delete [] primary_work;
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "Primary_work: " << primary_work << std::endl;
}

Classic & Classic::operator=(const Classic &c)
{
    if (this == &c)
        return *this;
    Cd::operator=(c); // copy base portion by using operator function
    delete [] primary_work;
    primary_work = new char[std::strlen(c.primary_work) + 1]; // delete the memory, then you should allocate new space
    std::strcpy(primary_work ,c.primary_work);
    return *this;
}
