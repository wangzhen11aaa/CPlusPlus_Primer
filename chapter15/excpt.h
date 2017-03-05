//
// Created by wangzhen on 05/03/2017.
//

#ifndef CPP_BOOK_EXCPT_H
#define CPP_BOOK_EXCPT_H
#include <iostream>
#include <stdexcept>

class abs_bad: public std::logic_error
{
protected:
    double v1;
    double v2;
public:
    abs_bad(const char * s= "not defined yet", double a = 0, double b = 0):std::logic_error(s), v1(a), v2(b) {}
    virtual void mesg() const = 0;
};

class bad_hmean: public abs_bad
{
public:
    bad_hmean(double a, double b): abs_bad("\n invalid arguments: a = -b\n", a, b) {}
    void mesg() const;
};

class bad_gmean: public abs_bad
{
public:
    bad_gmean(double a, double b): abs_bad("\n gmean arguments should be > 0 \n", a, b){}
    void mesg() const;
};

inline void bad_hmean::mesg() const
{
    std::cout << "hmean(" << v1 << " , " << v2 << "):";
    std::cout << what();
}

inline void bad_gmean::mesg() const
{
    std::cout << "gmean(" << v1 << " , " << v2 << "):";
    std::cout << what();
}
#endif //CPP_BOOK_EXCPT_H
