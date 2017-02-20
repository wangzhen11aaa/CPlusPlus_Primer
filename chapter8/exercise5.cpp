//
// Created by wangzhen on 20/02/2017.
//

#include <iostream>

template <typename T>
T largest(const T arr[]);

const int knum = 5;

int main(void)
{
    int iarr[knum] = {3, 10, 2, 20, 100};
    double darr[knum] = {-100.0, 2.0, 4.0, 256.0, 1024.0};

    std::cout << "iarr max is " << largest(iarr) << std::endl;
    std::cout << "darr max is " << largest(darr) << std::endl;

}

template <typename T>
T largest(const T arr[])
{
    T max = arr[0];
    for(int i = 1; i < knum; ++i)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}