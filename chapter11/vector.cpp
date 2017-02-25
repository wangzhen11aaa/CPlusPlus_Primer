//
// Created by wangzhen on 24/02/2017.
//
#include <cmath>
#include <fstream>
#include "vector.h"

using std::sqrt;
using std::cos;
using std::sin;
using std::atan;
using std::atan2;

namespace VECTOR {
    const double Rad_to_degree = 45.0 / atan(1.0);

    // private methods
    void Vector::set_mag() {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang() {
        if (x == 0 && y == 0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    // Set x from polar coordinate
    void Vector::set_x() {
        x = mag * cos(ang);
    }

    // Set y from polar coordinate
    void Vector::set_y() {
        y = mag * sin(ang);
    }

    // public methods
    Vector::Vector() // default constructor
    {
        x = y = ang = mag = 0.0;
        mode = RECT;
    }

    // construct vector from rectangular coordinates if form is r
    //(the default) or else from polar coordinate if form is p
    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL) {
            mag = n1;
            ang = n2;
            set_x();
            set_y();
        }
        else {
            std::cout << "Incorrect 3rd argument to Vector() --";
            std::cout << "Vector set to 0 \n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    // reset vector from rectangular coordinates if form is RECT (the default)
    // or else from polar coordinates if form is POL
    void Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL) {
            mag = n1;
            ang = n2 / Rad_to_degree;
            set_x();
            set_y();
        }
        else {
            std::cout << "Incorrect 3rd argument to Vector() --- ";
            std::cout << "Vector to set 0 \n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector() { } // destructor.
    void Vector::polar_mode()    // set to polar mode
    {
        mode = POL;
    }

    void Vector::rect_mode() {
        mode = RECT;
    }

    // operator overloading
    // add two Vectors
    Vector Vector::operator+(const Vector &b) const {
        return Vector(x + b.x, y + b.y);
    }

    // subtract Vector b from a;
    Vector Vector::operator-(const Vector &b) const {
        return Vector(x - b.x, y - b.y);
    }

    //reverse sign of vector
    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    // multiply vector by n
    Vector Vector::operator*(double n) const
    {
        return Vector(x * n, y * n);
    }

    // multiply n with vector
    Vector operator*(double n, Vector & a)
    {
        return a * n;
    }

    // display rectangular coordinates if mode is RECT,
    // else display polar coordinates if mode is POL.
    std::ostream &operator << (std::ostream &os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = ( " << v.x << ", " << v.y << ")";
        else if(v.mode == Vector::POL)
            os << "(m, a) = (" << v.mag << ", " << v.ang << ")";
        else
            os << "Vector object mode is invalid";
        return os;
    }

    std::ofstream &operator << (std::ofstream &ofs, const Vector &v)
    {
        if (v.mode == Vector::RECT)
            ofs << "(x,y) = ( " << v.x << ", " << v.y << ")";
        else if(v.mode == Vector::POL)
            ofs << "(m, a) = (" << v.mag << ", " << v.ang << ")";
        else
            ofs << "Vector object mode is invalid";
        return ofs;
    }
}

