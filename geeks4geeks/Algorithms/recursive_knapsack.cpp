//
// Created by wangzhen on 06/05/2017.
//

#include <iostream>
using std::cout;
using std::endl;
using std::max;

/*
 * The naive recursive implementation. top-bottom.
 * The cases can be split into the sub cases which includes item[x] and not.
 */

// Returns the maximum value.

int knapSack(int W, int wt[], int val[], int n)
{
    // Base case
    if (n == 0 || W == 0)
        return 0;

    // If the weight of the nth item is more than W at this time, then this item can not be included in the
    // optimal solution

    if (wt[n-1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(val[n-1] + knapSack(W - wt[n-1], wt, val, n - 1), 0 + knapSack(W, wt, val, n - 1));

}

int knapWeight(int W, int wt[], int val[], int n)
{
    // Base case
    if (n == 0 || W == 0)
        return 0;

    // If the weight of the nth item is more than W at this time, then this item can not be included in the
    // optimal solution

    if (wt[n-1] > W)
        return knapWeight(W, wt, val, n - 1);
    else
        return max(wt[n-1] + knapWeight(W - wt[n-1], wt, val, n - 1), 0 + knapWeight(W, wt, val, n - 1));

}


int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << "Weight " << knapWeight(W, wt, val, n);
    cout <<  "\n value : " << knapSack(W, wt, val, n);
    return  0;
}

