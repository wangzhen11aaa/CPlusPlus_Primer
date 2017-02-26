//
// Created by wangzhen on 25/02/2017.
//

#include <iostream>
#include "Stonewt_m.h"

using std::cout;

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = lbs - stone * Lbs_per_stn;
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

void Stonewt::set_pounds(float f_pounds)
{
    stone = int(f_pounds) / Lbs_per_stn;
    pds_left = f_pounds - stone * Lbs_per_stn;
    pounds = f_pounds;
}

Stonewt::~Stonewt()
{

}

void Stonewt::show_stn() const
{
   cout << stone << " stone" << pds_left << "pounds \n";
}

void Stonewt::show_lbs() const
{
    cout << pounds << " pounds \n";
}

bool operator<(const Stonewt &a, const Stonewt &b)
{
    return a.pounds < b.pounds;
}

bool operator<=(const Stonewt &a, const Stonewt &b)
{
    return a.pounds <= b.pounds;
}

bool operator>(const Stonewt &a, const Stonewt &b)
{
    return a.pounds > b.pounds;
}

bool operator>=(const Stonewt &a, const Stonewt &b)
{
    return a.pounds >= b.pounds;
}
bool operator==(const Stonewt &a, const Stonewt &b)
{
    return a.pounds == b.pounds;
}
bool operator!=(const Stonewt &a, const Stonewt &b)
{
    return a.pounds != b.pounds;
}