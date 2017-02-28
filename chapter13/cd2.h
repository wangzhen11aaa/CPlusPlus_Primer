//
// Created by wangzhen on 28/02/2017.
//

#ifndef CPP_BOOK_CD2_H
#define CPP_BOOK_CD2_H
#ifndef CPP_BOOK_CD_H
#define CPP_BOOK_CD_H

// base class
class Cd //represents a CD disk
{
private:
    char * performance;
    char * label;
    int selections; // number of selections
    double playtime; // play time in minutes
public:
    Cd(const char *s1, const char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const; // report all CD data
    Cd & operator=(const Cd &d);
};
#endif //CPP_BOOK_CD_H



#endif //CPP_BOOK_CD2_H
