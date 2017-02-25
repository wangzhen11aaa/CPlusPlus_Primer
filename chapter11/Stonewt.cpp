//
// Created by wangzhen on 25/02/2017.
//
#include <iostream>
#include "Stonewt.h"

// default constructor
Stonewt::Stonewt(Mode form)
{
    mode = form;
    stone = pds_left = pounds = 0;
}

// constructor for double
Stonewt::Stonewt(double lbs, Mode form)
{
    mode = form;
    pounds = lbs;
    stone = int(lbs) / Lbs_per_stn;
    pds_left = pounds - stone * Lbs_per_stn;
}

// constructor for stone, int
Stonewt::Stonewt(int sn, Mode form)
{
    mode = form;
    stone = sn;
    pds_left = 0.0;
    pounds = sn * Lbs_per_stn;
}
// constructor for stone, pounds left
Stonewt::Stonewt(int sn, double lbs, Mode form)
{
    mode = form;
    stone = sn;
    pds_left = lbs;
    pounds = sn * Lbs_per_stn + lbs;
}

Stonewt::~Stonewt()
{ }

std::ostream & operator<<(std::ostream &os, Stonewt &s)
{
    if (s.mode == Stonewt::STONE)
        os << "Stonewt (stone) : " << s.stone << ", " << s.pds_left << std::endl;
    else if(s.mode == Stonewt::INTEGER)
        os << "Stonewt (integer) :" << s.stone << std::endl;
    else if (s.mode == Stonewt::FLOAT)
        os << "Stonewt (float) : " << s.pounds << std::endl;
    else
        os << "Error mode";
    return os;
}
