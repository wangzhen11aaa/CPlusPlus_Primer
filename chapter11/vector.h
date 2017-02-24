//
// Created by wangzhen on 24/02/2017.
//

#ifndef CPP_BOOK_VECTOR_H
#define CPP_BOOK_VECTOR_H

#include <iostream>
namespace VECTOR
{
    class Vector{
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        double mag; //length of vector
        double ang; //direction of vector in degree
        Mode mode; //RECT or POL

        // private methods for setting values
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}//report x value
        double yval() const {return y;} //report y value
        double magval() const {return mag;} // report magnitude
        double angval() const {return ang;} // report angle
        void polar_mode(); //set mode to POL
        void rect_mode(); //set mode to RETC

        // operation overloading
        Vector operator+(const Vector &b) const;
        Vector operator-(const Vector &b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        // friends
        friend Vector operator*(double n, const Vector &a);
        friend std::ostream & operator<<(std::ostream &os, const Vector &v);
        friend std::ofstream & operator<<(std::ofstream &ofs, const Vector &v);
    };
}

#endif //CPP_BOOK_VECTOR_H
