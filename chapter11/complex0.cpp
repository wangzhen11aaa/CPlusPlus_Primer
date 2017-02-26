//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include "complex0.h"


//constructor #1
Complex::Complex(double r, double i)
{
    __r = r;
    __i = i;
}

//Class method for multiplication.
Complex Complex::operator*(double m)
{
    __r *= m;
    __i *= m;
    return *this;
}

Complex operator+(const Complex &a, const Complex &b)
{
    Complex sum(a.__r + b.__r, a.__i + b.__i);
    return sum;
}

Complex operator-(const Complex &a, const Complex &b)
{
    Complex diff(a.__r - b.__r, a.__i - b.__i);
    return diff;
}

Complex operator*(double m, Complex &c)
{
    return c * m;
}

Complex operator*(const Complex &a, const Complex &b)
{
    Complex c_mul(a.__r * b.__r - a.__i * b.__i, a.__r * b.__i + a.__i * b.__r);
    return c_mul;
}

Complex operator~(const Complex &c)
{
    return Complex(-c.__r, -c.__i);
}

std::istream & operator>>(std::istream &is ,Complex &c)
{
    std::cout << "real part: ";
    is >> c.__r;
    std::cout << "imaginary part :";
    is >> c.__i;
    return is;
}

std::ostream & operator << (std::ostream &os,const Complex &c)
{
    os << "(" << c.__r << "," << c.__i << "i)";
    return os;
}


