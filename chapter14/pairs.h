//
// Created by wangzhen on 28/02/2017.
//

#ifndef CPP_BOOK_PAIRS_H
#define CPP_BOOK_PAIRS_H

template <typename T1, typename T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    //T1 & first();
    //T2 & second();
    T1 first() const {return a;}
    T2 second() const {return b;}
    Pair(const T1 &aval,const T2 &bval): a(aval), b(bval) {};
    Pair() {}
    //Pair &operator=(const Pair &rs);

};


#endif //CPP_BOOK_PAIRS_H
