//
// Created by wangzhen on 24/02/2017.
//

#ifndef CPP_BOOK_VECTOR_M_H
#define CPP_BOOK_VECTOR_M_H
#include <iostream>

namespace VECTOR
{
    class Vector{
    private:
        double x;
        double y;

    public:
        Vector();
        Vector(double n1, double n2);
        void reset(double mag, double ang);
        ~Vector();
        double xval() const {return x;}//report x value
        double yval() const {return y;} //report y value
        double magval() const; // report magnitude
        double angval() const; // report angle

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
#endif //CPP_BOOK_VECTOR_M_H
