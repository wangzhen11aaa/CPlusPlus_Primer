//
// Created by wangzhen on 23/02/2017.
//

#include <iostream>

#ifndef CPP_BOOK_MOVE_H
#define CPP_BOOK_MOVE_H

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0); // set x, y to a, b
    void showMove() const;
    Move & add(const Move &m) const;

    void reset(double a = 0, double b = 0);
};

#endif //CPP_BOOK_MOVE_H
