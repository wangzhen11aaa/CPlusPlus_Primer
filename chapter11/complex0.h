//
// Created by wangzhen on 26/02/2017.
//

#ifndef CPP_BOOK_COMPLEX_H
#define CPP_BOOK_COMPLEX_H

#include <iostream>

class Complex
{
private:
    double __r;
    double __i;
public:
    Complex(double r, double i);
    Complex() {__r = 0.0; __i = 0.0;}
    ~Complex() {};

    Complex operator*(double m);

    // friend functions.
    friend Complex operator+(const Complex &a, const Complex &b);
    friend Complex operator-(const Complex &a,const Complex &b);
    friend Complex operator*(const Complex &a,const Complex &b);
    friend Complex operator*(double m,Complex &c);
    friend Complex operator~(const Complex &c);
    friend std::istream & operator>>(std::istream &is ,Complex &c);
    friend std::ostream & operator<<(std::ostream &os, const Complex &c);
};

#endif //CPP_BOOK_COMPLEX_H
