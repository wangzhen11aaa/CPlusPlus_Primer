//
// Created by wangzhen on 06/03/2017.
//

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

template <class T>
int reduce(T ar[], int n);

template <class T>
void quicksort(T ar[], int s, int e);

template <class T>
int _quicksort(T ar[], int s, int e);

template <class T>
void exchange(T *s, T *t);


int main(void)
{
    long ar[9] = {3, 2, 2, 10, 1, 4, 9, 1, 2};
    for (int i = 0; i < 9; i++)
        std::cout << ar[i] << "\t";
    int j = reduce(ar, 9);

    std::cout << "\nAfter sort & reduce \n";
    for (int i = 0; i < j; ++i)
        std::cout << ar[i] << std::endl;

    std::string str_arry[8] = {"abc", "bcd", "abc", "bcd", "efg", "eee", "aaa", "a"};

    j = reduce(str_arry, 8);

    std::cout << "\nAfter sort & reduce \n";
    for (int i = 0; i < j; ++i)
        std::cout << str_arry[i] << std::endl;

    return 0;

}

template <class T>
int reduce(T ar[], int n)
{
    quicksort(ar, 0, n - 1);
    std::cout << "After sort :\n";

    for (int j = 0; j < n; ++j)
        std::cout << ar[j] << "\t";
    int i = 0;
    vector<T> var;
    var.push_back(ar[0]);

    for (int j = 1; j < n; ++j)
    {
        if (var[i] == ar[j])
            continue;
        else {
            var.push_back(ar[j]);
            ++i;
        }
    }
    for (int j = 0; j <= i; ++j)
        ar[j] = var[j];
    return i + 1;
}

template <class T>
void quicksort(T ar[], int s, int e)
{
    if (s < e)
    {
        int m = _quicksort(ar, s ,e);
        quicksort(ar, s, m - 1);
        quicksort(ar, m + 1, e);

    }
}

template <class T>
int _quicksort(T ar[], int s, int e)
{
    T pivot = ar[e];
    int i, j;
    for (i = j = s; i < e; ++i)
    {
        if (ar[i] < pivot)
            exchange (&ar[i], &ar[j++]);
    }
    exchange(&ar[j], &ar[e]);
    return j;
}

template <class T>
void exchange(T *s, T *t)
{
    T r = *s;
    *s = *t;
    *t = r;
}
