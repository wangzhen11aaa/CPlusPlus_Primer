//
// Created by wangzhen on 23/02/2017.
//

#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showMove() const {
    using std::cout;
    using std::endl;
    cout << "x :" << x << endl;
    cout << "y :" << y << endl;
}

Move &Move::add(const Move &m) const {
    //Move nmove(x + m.x, y + m.y);
    Move *pm = new Move(x + m.x, y + m.y);
    return *pm;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}