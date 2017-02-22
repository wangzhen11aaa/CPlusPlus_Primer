//
// Created by wangzhen on 22/02/2017.
//
#include <iostream>

#ifndef CPP_BOOK_GOLF_H
#define CPP_BOOK_GOLF_H
class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf() {fullname[0] = '\0'; handicap = 0;};
    Golf(const char *name, int hc);
    void setgolf();
    void showgolf();
};

#endif //CPP_BOOK_GOLF_H
