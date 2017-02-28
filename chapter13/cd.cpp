//
// Created by wangzhen on 28/02/2017.
//

#include "cd.h"
#include <cstring>
#include <iostream>

// default constructor
Cd::Cd()
{
    performance[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

// constructor

Cd::Cd(const char *s1,const char *s2, int n, double x)
{
    if (std::strlen(s1) > 49 or std::strlen(s2) > 19)
        std::cout << "Initialize string too long \n";
    else
    {
        std::strcpy(performance, s1);
        std::strcpy(label, s2);
        selections = n;
        playtime = x;
    }
}

// Copy constructor
Cd::Cd(const Cd &d)
{
    std::strcpy(performance, d.performance);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

// destructor
Cd::~Cd()
{

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
        std::strcpy(performance, cd.performance);
        std::strcpy(label, cd.label);
        selections = cd.selections;
        playtime = cd.playtime;
        return *this;
    }
}



