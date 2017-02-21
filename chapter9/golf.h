//
// Created by wangzhen on 21/02/2017.
//

#include <iostream>
#include <cstring>

#ifndef CPP_BOOK_GOLF_H
#define CPP_BOOK_GOLF_H

const int Len =40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf &g, const char *name, int hc); // non-interactive version.

int setgolf(golf &g); //interactive version.

void handicap(golf &g, int hc); // function resets handicap to a new value

void showgolf(const golf &g); // function displays contents of golf structure

#endif //CPP_BOOK_GOLF_H
