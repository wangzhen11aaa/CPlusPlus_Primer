//
// Created by wangzhen on 28/02/2017.
//

#ifndef CPP_BOOK_PORT_H
#define CPP_BOOK_PORT_H

#include <iostream>

using namespace std;
class Port {
private:
    char * brand;
    int bottles;
    char style[20]; // i.e., tawny, ruby, vintage
public:
    Port(const char * br = "none", const char * st = "none", int b = 0);
    Port(const Port & p); // copy constructor
    virtual ~Port() {
        delete [] brand;
    }
    Port & operator=(const Port & p);
    Port & operator+=(int b); // adds b to bottles
    Port & operator-=(int b); // subtracts b from bottles, if available
    int BottleCount() const {
        return bottles;
    }
    virtual void Show() const;
    friend std::ostream & operator<<(std::ostream & os, const Port & p);
};

#endif //CPP_BOOK_PORT_H
