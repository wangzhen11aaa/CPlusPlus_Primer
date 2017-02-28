//
// Created by wangzhen on 28/02/2017.
//

#include "cd2.h"
#include <cstring>
#include <iostream>

// default constructor
Cd::Cd()
{
    performance = new char[1];
    performance[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

// constructor

Cd::Cd(const char *s1,const char *s2, int n, double x)
{
    {
        performance = new char[std::strlen(s1) + 1];
        std::strcpy(performance, s1);
        label = new char[std::strlen(s2) + 1];
        std::strcpy(label, s2);
        selections = n;
        playtime = x;
    }
}

// Copy constructor
Cd::Cd(const Cd &d)
{
    performance = new char[std::strlen(d.performance) + 1];
    std::strcpy(performance, d.performance);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

// destructor
Cd::~Cd()
{
    delete [] performance;
    delete [] label;
}

void Cd::Report() const
{
    std::cout << "performance : " << performance << std::endl;
    std::cout << "label : " << label << std::endl;
    std::cout << "selections : " << selections << std::endl;
    std::cout << "playtime : " << playtime << std::endl;
}

Cd& Cd::operator=(const Cd &cd)
{
    if (this == &cd)
        return *this;
    else
    {
        delete [] performance;
        performance = new char[std::strlen(cd.performance) + 1];
        std::strcpy(performance, cd.performance);
        delete [] label;
        label = new char[std::strlen(cd.label) + 1];
        std::strcpy(label, cd.label);
        selections = cd.selections;
        playtime = cd.playtime;
        return *this;
    }
}


