//
// Created by wangzhen on 22/02/2017.
//


#ifndef CPP_BOOK_SALE_H
#define CPP_BOOK_SALE_H

namespace SALES{
    class Sales
    {
    private:
        static const int QUARTERS = 4;
        double __sales[QUARTERS];
        double __average;
        double __max;
        double __min;
    public:
        Sales();
        Sales(const double ar[], int n);
        Sales & setSales();
        void showSales();

    };
}

#endif //CPP_BOOK_SALE_H
