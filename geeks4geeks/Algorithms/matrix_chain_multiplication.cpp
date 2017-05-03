//
// Created by wangzhen on 03/05/2017.
//

/* A naive recursive implementation that simply follows
 * the above optimal substructure property */


#include<iostream>
#include<limits>

using std::cout;
using std::endl;

int sum = 0;
int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
    sum++;
    /*
     * place parenthesis at different places between first and the last
     * matrix, recursively calculate count of multiplications for each parenthesis placement
     * and return the minimum count.
     */

    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k) + MatrixChainOrder(p, k + 1, j) + p[i-1] * p[k] * p[j];
        if (count < min)
            min = count;
    }
    // Return minimum count
    return min;
}

// Driver program to test above function
int main()
{
    int p[] = {1, 2, 3, 4, 3};
    int n = sizeof(p)/ sizeof(p[0]);
    cout << MatrixChainOrder(p, 1, n - 1);
    cout << " \n total recursive times " << sum << endl;
}


// Total recursive tree is S(n) = (n-1)S(n-1) = Factorial(n-1) = (n-1)!
