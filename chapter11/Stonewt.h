//
// Created by wangzhen on 25/02/2017.
//

#ifndef CPP_BOOK_STONEWT_H
#define CPP_BOOK_STONEWT_H
#include <iostream>
class Stonewt
{
public:
    enum Mode {STONE, INTEGER, FLOAT};
private:
    enum {Lbs_per_stn = 14}; // pounds per stone
    int stone; // whole stones
    double pds_left; //fractional pounds
    double pounds;  // entire weight
    Mode mode; // STONE ,INTEGER or FLOAT
public:
    Stonewt(double lbs, Mode form = FLOAT); // constructor for double pounds
    Stonewt(int sn, double lbs, Mode form = STONE); // constructor for stone, lbs
    Stonewt(int sn, Mode form = STONE); // constructor for int
    Stonewt(Mode form = FLOAT); //default constructor
    ~Stonewt();
    friend std::ostream & operator<<(std::ostream &os, Stonewt & s);
    //void show_lbs() const; // show weight in pounds in format.
    //void show_stn() const; // show weight in stone format.

};

#endif //CPP_BOOK_STONEWT_H
