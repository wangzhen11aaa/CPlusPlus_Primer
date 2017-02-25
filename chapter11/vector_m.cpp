//
// Created by wangzhen on 24/02/2017.
//

#include <cmath>
#include <fstream>
#include "vector_m.h"

namespace VECTOR
{
    using std::sqrt;
    using std::atan;
    using std::atan2;
    using std::cos;
    using std::sin;

    const double Rad_to_degree = 45.0/atan(1);
    Vector::Vector() // explict define default constructor
    {
        x = y = 0.0;
    }

    Vector::Vector(double n1, double n2)
    {
        x = n1;
        y = n2;
    }

    // reset function only for Polar coordinates input.
    void Vector::reset(double mag, double ang)
    {
        x = mag * cos(ang / Rad_to_degree);
        y = mag * sin(ang / Rad_to_degree);
    }

    Vector::~Vector() { }
    // return the magnitude in polar coordinate.
    double Vector::magval() const
    {
        return sqrt(x * x + y * y);
    }
    // return the angle in polar coordinate.

    double Vector::angval() const
    {
        return atan2(x, y);
    }

    // operator overloading
    // add two vectors
    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    // subtract vector b from vector a.
    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }
    // reverse sign of vector
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    // multiply vector by n
    Vector Vector::operator*(double n) const
    {
        return Vector(x * n, y * n);
    }

    //friends methods
    Vector operator*(double n, Vector &a)
    {
        return a * n;
    }

    std::ostream &operator << (std::ostream &os, const Vector &v)
    {
       os << "(x,y) = ( " << v.x << ", " << v.y << ")" << "(m, a) = (" << v.magval() << ", " << v.angval() << ")";
        return os;
    }

    std::ofstream &operator << (std::ofstream &ofs, const Vector &v)
    {
        ofs << "(x,y) = ( " << v.x << ", " << v.y << ")" << "(m, a) = (" << v.magval() << ", " << v.angval() << ")";
        return ofs;
    }
}