//
// Created by wangzhen on 07/05/2017.
//

/*
 * Dynamic programming
 * Bottom-to-top problem
 * The standard case is :
 * The path_cost = cost[i][j] + min(cost[i-1][j], cost[i][j-1], cost[i -1][j - 1]) for i > 0 and j > 0
 * The path_cost = cost[i][j] + 0; for i =0 and j = 0
 * The path_cost = cost[i][j] + cost[i - 1][j] for j = 0, i > 0, the first column
 * The path_cost = cost[i][j] + cost[i][j - 1] for i = 0, j > 0, the first row
 */

#include <iostream>
using std::cout;
using std::endl;

const int R = 3;
const int C = 3;

int min(int x, int y, int z)
{
    return z < (y < x? y: x)? z : ((y < x)? y: x);
}

int min_cost(int cost[R][C], int m, int n)
{
    int i, j;
    // record the min_cost from start point (0, 0) to end point (i, j) in the path_cost
    int path_cost[R][C];

    path_cost[0][0] = cost[0][0];

    /* Initialize first column of total cost(path_cost) array */
    for (i = 1; i <= m; ++i)
        path_cost[i][0] = path_cost[i - 1][0] + cost[i][0];

    /* Initialize first row of total cost[path_cost] array */
    for (j = 1; j <= n; ++j)
        path_cost[0][j] = path_cost[0][j - 1] + cost[0][j];

    for (i = 1; i <= m; ++i)
        for (j = 1; j <= n; ++j)
            path_cost[i][j] = cost[i][j] + min(path_cost[i-1][j], path_cost[i][j-1],
                                                      path_cost[i-1][j-1]);

    return path_cost[m][n];
}

int main()
{
    int cost[R][C] = { {1, 2, 3},
                       {4, 8, 2},
                       {1, 5, 3} };
    cout << min_cost(cost, 2, 2);
    return 0;
}
