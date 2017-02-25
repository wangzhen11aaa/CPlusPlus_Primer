//
// Created by wangzhen on 25/02/2017.
//

#ifndef CPP_BOOK_MYTIME_H
#define CPP_BOOK_MYTIME_H

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void Reset(int h = 0, int m = 0);

    // friend operator overload
    friend Time operator+(const Time &a, const Time &b);
    friend Time operator-(const Time &a, const Time &b);
    friend Time operator*(const Time &a,  double n);
    void Show() const;
};
#endif //CPP_BOOK_MYTIME_H
