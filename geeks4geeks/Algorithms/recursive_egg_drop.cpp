//
// Created by wangzhen on 08/05/2017.
//

/* Suppose that we wish to know which stories in a 36-story building are safe to drop eggs from, and which will cause the eggs to break on landing. We make a few assumptions:
 1.An egg that survives a fall can be used again.
 2.A broken egg must be discarded.
 3.The effect of a fall is the same for all eggs.
 4.If an egg breaks when dropped, then it would break if dropped from a higher floor.
 5.If an egg survives a fall then it would survive a shorter fall.
 6.It is not ruled out that the first-floor windows break eggs, nor is it ruled out that the 36th-floor do not cause an egg to break.
 */

/*
 * S(n,k) means n eggs and k floors from 1 to k.
 * We want to know the minimum drops in the worst situation.
 * Every Experiment like drop from xth floor will get the following situation. S(n-1, k-1) or S(n, k - x).
 * We want to minimum this.
 */

#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

int max(int a, int b) { return (a > b)? a : b;}
int drop(int n, int k)
{
    // basic situation
    // no more than one floor to test
    if (k <= 1)
        return k;
    // If we have only one egg, we should drop floor one by one from bottom to top.
    if (n == 1)
        return k;

    int min = INT_MAX, res;
    for (int x = 1; x <= k; ++x)
    {
        res = 1 + max(drop(n - 1, x - 1),drop(n, k - x));
        if (res < min)
            min = res;
    }
    return min;
}

int main()
{
    int n = 2, k = 10;
    cout << "minimum drop time of worst case is " << drop(2, 10) << endl;
    return 0;
}
