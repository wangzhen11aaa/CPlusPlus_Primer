//
// Created by wangzhen on 23/02/2017.
//

#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char *name, int ci) {
    strncpy(__name, name, Len);
    __ci = ci;
}

void Plorg::change_ci(int ci) {
    __ci = ci;
}

void Plorg::show() const {
    using std::cout;
    cout << "name :" << __name << ", ci : " << __ci;
}

Plorg::~Plorg() {

}

