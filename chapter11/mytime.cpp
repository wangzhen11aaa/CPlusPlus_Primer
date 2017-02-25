//
// Created by wangzhen on 25/02/2017.
//

#include "mytime.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Time::Time()
{
    hours = 0;
    minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::addMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::addHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time &a, const Time &b)
{
    Time sum;
    sum.minutes = a.minutes + b.minutes;
    sum.hours = a.hours + b.hours + (sum.minutes / 60);
    sum.minutes = sum.minutes % 60;
    return sum;
}

Time operator-(const Time &a, const Time &b)
{
    Time diff;
    int tot1, tot2;
    tot1 = a.minutes + 60 * a.hours;
    tot2 = b.minutes + 60 * b.hours;
    diff.minutes = (tot1 - tot2) % 60;
    diff.hours = (tot1 - tot2) / 60;
    return diff;
}

Time operator*(const Time &t, double n)
{
    Time result;
    long totalminutes = t.hours * n * 60 + t.minutes * n;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

void Time::Show() const
{
    cout << hours << " hours " << minutes << " minutes\n";
}
