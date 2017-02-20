//
// Created by wangzhen on 20/02/2017.
//

#include <iostream>
#include <cstring>
#include <cctype>

template <typename T>
T maxn(T *, int n);

template <> const char* maxn(const char * arr[], int n);

int main(void)
{
    double darr[4] = {-1.0, 2.0, 3.0, -20.0};
    std::cout << "max in darr" << maxn(darr, 4) << std::endl;
    int iarr[10] = {1,3,4,2,10,8,3,2,9,5};
    std::cout << "max in iarr" << maxn(iarr, 10) << std::endl;

    const char *arr[4] = {"abc", "efghi", "hello, world", "xilx"};
    std::cout << "max string in arr : " << maxn(arr, 4) << std::endl;
    return 0;
}
template <typename T>
T maxn(T *arr, int n)
{
        T max = arr[0];
        for (int i = 1; i < n; ++i)
        {
            if (max < arr[i])
                max = arr[i];
        }
        return max;
}

template <> const char * maxn(const char * arr[], int n)
{
        int max_index = 0;
        size_t max_str_len = strlen(arr[0]);
        int i;
        for (i = 1; i < n; ++i)
        {
            if (max_str_len < strlen(arr[i]))
            {
                max_str_len = strlen(arr[i]);
                max_index = i;
            }
        }
        return arr[max_index];
}