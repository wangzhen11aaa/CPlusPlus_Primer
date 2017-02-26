//
// Created by wangzhen on 25/02/2017.
//

#ifndef CPP_BOOK_STONEWT_M_H
#define CPP_BOOK_STONEWT_M_H
#include <iostream>

class Stonewt{
public:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left; // fractional pounds
    double pounds;

public:
    Stonewt(double lbs); // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();      //default constructor
    ~Stonewt();
    void set_pounds(float f_pounds);
    void show_lbs() const; // show weight in pounds format
    void show_stn() const; // show weight in stone format

    //friend methods for relation operations
    friend bool operator<(const Stonewt &a, const Stonewt &b);
    friend bool operator<=(const Stonewt &a, const Stonewt &b);
    friend bool operator>(const Stonewt &a, const Stonewt &b);
    friend bool operator>=(const Stonewt &a, const Stonewt &b);
    friend bool operator==(const Stonewt &a, const Stonewt &b);
    friend bool operator!=(const Stonewt &a, const Stonewt &b);
};

#endif //CPP_BOOK_STONEWT_M_H
