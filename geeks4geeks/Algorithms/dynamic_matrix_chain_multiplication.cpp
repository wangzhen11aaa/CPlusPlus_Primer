//
// Created by wangzhen on 03/05/2017.
//

#include <iostream>
#include <limits>

using std::cout;
using std::endl;

int MatrixChainOrder(int p[], int n)
{
    /*
     * For simplicity of the program, one extra row and one extra column are allocated in m[][]
     */

    int m[n][n];
    int i, j, k, L, q;
    /*
     * m[i,j] = Minimum number of scalar multiplications needed to compute the Matrix A[i]A[i+1]...A[j]
     * = A[i..j].Where dimension of A[i] is p[i-1]*p[i]
     */
    for (i = 1; i < n; ++i)
        m[i][i] = 0;

    // L is the chain length
    for (L = 2; L < n; ++L)
    {
        for (i = 1; i < n-L+1; ++i)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;

            // the usage of k is to use the intermediate result
            for (k = i; k < j; ++k)
            {
                q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return m[1][n-1];
}

int main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << MatrixChainOrder(arr, size);
    return 0;
}
