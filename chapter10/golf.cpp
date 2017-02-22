//
// Created by wangzhen on 22/02/2017.
//
#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char *name, int hc){
    strncpy(fullname, name, Len);
    handicap = hc;
}

void Golf::showgolf() {
    std::cout << "name :" << fullname << "handicap :" << handicap << std::endl;
}

void Golf::setgolf() {
    char temp[Len];
    std::cout << "Input new namae :";
    std::cin.getline(temp, Len);
    strncpy(this->fullname , temp, Len);
    std::cout << "Enter handicap :";
    std::cin>>this->handicap;
}