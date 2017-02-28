//
// Created by wangzhen on 28/02/2017.
//

#ifndef CPP_BOOK_VINTAGE_H
#define CPP_BOOK_VINTAGE_H

#include "port.h"

class VintagePort : public Port { // style necessarily = 'vintage'
private:
    char * nickname; // i.e., 'The Noble' or 'Old Velvet', etc.
    int year; // vintage  xxvcf year
public:
    VintagePort();
    VintagePort(const char * br, int b, const char * nn, int y);
    VintagePort(const VintagePort & vp);
    ~VintagePort() {
        delete [] nickname;
    }
    VintagePort & operator=(const VintagePort & vp);
    void Show() const;
    friend ostream & operator<<(ostream & os, const VintagePort & vp);
};


#endif //CPP_BOOK_VINTAGE_H
