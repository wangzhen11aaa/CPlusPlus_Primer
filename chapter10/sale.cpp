//
// Created by wangzhen on 22/02/2017.
//

#include <iostream>
#include <cstring>
#include "sale.h"

namespace SALES{
    using std::cin;
    using std::cout;
    using std::endl;
    Sales::Sales()
    {
        memset(__sales, 0, sizeof(__sales));
        __min = 0;
        __max = 0;
        __average = 0;
    }
    Sales::Sales(const double *ar, int n) {
        int num_sales = n < QUARTERS ?n : QUARTERS;
        double min, max, average, total = 0;
        min = max = ar[0];
        for (int i = 0; i < num_sales; ++i){
            __sales[i] = ar[i];
            if (ar[i] < min)
                min = ar[i];
            else if (ar[i] > max)
                max = ar[i];
            total += ar[i];
        }

        __max = max;
        __min = min;

        average = total / num_sales;
        __average = average;
    }

    Sales & Sales::setSales()
    {

        double qt, min ,max, average, total = 0;
        for (int i = 0; i < QUARTERS; ++i)
        {
            cout << "Enter sales for quarters #" << i + 1 << ": ";
            cin >> qt;
            __sales[i] = qt;
            total += qt;
        }
        min = max = __sales[0];
        for (int i = 0; i < QUARTERS; i++)
        {
            if (min > __sales[i])
                min = __sales[i];
            else if (max < __sales[i])
                max = __sales[i];
        }

        average = total / QUARTERS;
        __average = average;
        __max = max;
        __min = min;

        return *this;
    }
    void Sales::showSales() {

        for (int i = 0; i < 4; i++)
            cout << "Quarter " << i + 1 << ": " << __sales[i] << endl;

        cout << "Average: " << __average << endl;
        cout << "Maximum: " << __max << endl;
        cout << "Minimum: " << __min << endl;
        cout << endl;
    }
}
