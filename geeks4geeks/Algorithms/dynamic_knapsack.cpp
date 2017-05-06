//
// Created by wangzhen on 06/05/2017.
//

#include <iostream>
using std::cout;
using std::endl;
using std::max;

int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];

    // build the table K[][] in bottom up manner
    for (int i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;

            //Update the value in the weight column.
            else if (wt[i-1] <= w)
                K[i][w] = max(val[i - 1] + K[i -1][w- wt[i-1]], K[i-1][w]);
           // can not update because remain weight is less than this weight in the row.
            else
                K[i][w] = K[i-1][w];
        }
    }
    return K[n][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
