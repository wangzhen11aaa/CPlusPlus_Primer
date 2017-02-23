//
// Created by wangzhen on 23/02/2017.
//
#include <iostream>

#ifndef CPP_BOOK_PLORG_H
#define CPP_BOOK_PLORG_H
class Plorg{
private:
    static const int Len = 20;
    char __name[Len];
    int __ci;
public:
    Plorg(const char *name = "Plorga", int ci = 50);
    void change_ci(int ci);
    void show() const;
    ~Plorg();
};

#endif //CPP_BOOK_PLORG_H
