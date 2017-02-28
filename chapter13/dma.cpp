//
// Created by wangzhen on 28/02/2017.
//

#include <iostream>
#include "dma.h"

//default constructor
DMAABC::DMAABC(const char *l, int r)
{
    label = new char(std::strlen(l) + 1);
    std::strcpy(label, l);
    rating = r;
}

// copy constructor
DMAABC::DMAABC(const DMAABC &rs)
{
    label = new char(std::strlen(rs.label) + 1);
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

// destructor
DMAABC::~DMAABC()
{
    std::cout << label << "destruction \n";
    delete [] label;
}

// assignment operator function
DMAABC & DMAABC::operator=(const DMAABC &rs)
{
    if (this == &rs)
        return *this;
    else
    {
        delete [] label;
        label = new char(std::strlen(rs.label) + 1);
        std::strcpy(label, rs.label);
        rating = rs.rating;
        return *this;
    }
}

std::ostream & operator<<(std::ostream &os, const DMAABC &rs)
{
    os << "label : \t" << rs.label << " rating :\t" << rs.rating << std::endl;
    return os;
}

// lackDMA class

// one kind constructor
lackDMA::lackDMA(const char *c, const char *l, int r):DMAABC(l, r)
{
    if (std::strlen(c) >= 40)
        std::cout << "string too long";
    else
        std::strcpy(color, c);
}

//another kind constructor
lackDMA::lackDMA(const char *c, const DMAABC &rs):DMAABC(rs) // use copy constructor of base class
{
    if (std::strlen(c) >= 40)
        std::cout << "string too long";
    else
        std::strcpy(color, c);
}

// copy constructor
lackDMA::lackDMA(const lackDMA &rs):DMAABC(rs)
{
    if (std::strlen(rs.color) >= 40)
        std::cout << "string too long";
    else
        std::strcpy(color, rs.color);
}

lackDMA & lackDMA::operator=(const lackDMA &rs)
{
    (DMAABC &) *this=(rs);
    std::strcpy(color, rs.color);
    return *this;
}

void lackDMA::View() const
{
    std::cout << (DMAABC &)*this << std::endl;
    std::cout << color << std::endl;
}

std::ostream & operator<<(std::ostream &os, const lackDMA &rs)
{
    os << "color : \t" << rs.color << std::endl;
    return os;
}

// constructor
hasDMA::hasDMA(const char *s, const char *l, int r): DMAABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const DMAABC &rs):DMAABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &rs): DMAABC(rs)
{
    style = new char[std::strlen(rs.style) + 1];
    std::strcpy(style, rs.style);
}

hasDMA & hasDMA::operator=(const hasDMA &rs)
{
    if (this == &rs)
        return *this;
    else
    {
        (DMAABC &) *this = (rs);
        delete[] style;
        style = new char[std::strlen(rs.style) + 1];
        std::strcpy(style, rs.style);
        return *this;
    }
}

hasDMA::~hasDMA()
{
    delete [] style;
}

void hasDMA::View() const
{
    std::cout << (DMAABC &)*this << std::endl;
    std::cout << style << std::endl;
}

std::ostream & operator<<(std::ostream &os, const hasDMA &rs)
{
    os << "style: " << rs.style << std::endl;
    return os;
}

