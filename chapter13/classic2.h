//
// Created by wangzhen on 28/02/2017.
//

#ifndef CPP_BOOK_CLASS2_H
#define CPP_BOOK_CLASS2_H



#include "cd2.h"

class Classic : public Cd
{
private:
    char * primary_work; // use new to allocate memory
public:
    Classic();
    Classic(const char *pw, const char *s1, const char *s2, int n, double x);
    Classic(const Classic &c);
    virtual ~Classic();
    virtual void Report() const;

    Classic & operator=(const Classic &c);
};

#endif //CPP_BOOK_CLASS2_H
