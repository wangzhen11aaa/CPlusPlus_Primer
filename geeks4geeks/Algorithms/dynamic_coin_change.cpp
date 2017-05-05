//
// Created by wangzhen on 04/05/2017.
//

#include<iostream>
using std::cout;
using std::endl;

int count(int S[], int m, int n)
{
    /*
     * Let us think it intuitively. The bigger the number is, the more methods it can be
     * changed. It uses the basic count principles in combinations.
     * Method computations paths from bottom-up.
     */
    // result[i] will used to storing the number of paths for the value i.
    // Initialize all elements in table, [0, n]
    int result[n+1];
    memset(result,0, n+1);

    // cartesian product.
    for (int i = 0; i < m; ++i)
        for (j = S[i]; j <= n; j++)
        {
            result[j] += result[j - S[i]];
        }
    return result[n];
}

int main()
{

}