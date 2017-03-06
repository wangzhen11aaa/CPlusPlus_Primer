//
// Created by wangzhen on 06/03/2017.
//

#include <iostream>

int reduce(long ar[], int n, long uniq_ar[]);
void quicksort(long ar[], int s, int e);
int _quicksort(long ar[], int s, int e);
void exchange(long *s, long *t);


int main(void)
{
    long ar[9] = {3, 2, 2, 10, 1, 4, 9, 1, 2};
    long uniq_ar[9];
    for (int i = 0; i < 9; i++)
        std::cout << ar[i] << "\t";
    int l = reduce(ar, 9, uniq_ar);
    std::cout << "\nAfter sort : \n";
    for (int i = 0; i < 9; i++)
        std::cout << ar[i] << "\t";

    std::cout << "\nUnique array is : \n";
    for (int i = 0; i < l; ++i)
        std::cout << uniq_ar[i] << "\t";
    return 0;
}

int reduce(long ar[], int n, long uniq_ar[])
{
    quicksort(ar, 0, n - 1);
    int i = 0;
    uniq_ar[i] = ar[0]; // initialize the array.
    for (int j = 1; j < n; ++j)
    {
        if (uniq_ar[i] == ar[j])
            continue;
        else
        {
            uniq_ar[++i] = ar[j];
        }
    }
    return i + 1;
}

void quicksort(long ar[], int s, int e)
{
    if (s < e)
    {
        int m = _quicksort(ar, s, e);
        quicksort(ar, s, m - 1);
        quicksort(ar, m + 1, e);
    }
}

int _quicksort(long ar[], int s, int e)
{
    long pivot = ar[e];
    int i, j;
    for (i = j = s; i < e; ++i) {
        if (ar[i] < pivot) {
            exchange(&ar[i], &ar[j]);
            ++j;
        }
    }
    exchange(&ar[j], &ar[e]);
    return j;
}

void exchange(long *s, long *t)
{
    long r = *s;
    *s = *t;
    *t = r;
}
