//
// Created by wangzhen on 07/05/2017.
//

/*
 * Given a matrix M, element m_i_j in the M stands for the cost if path goes through it.
 * We want to know the minimum cost from start (0, 0) to end(x, y).
 * Recursive problem : top-bottom problem. The standard form will be
 * min_cost(cost[], x, y) = cost[x][y] + min( min_cost(cost[], x - 1, y), min_cost(cost[], x, y - 1),
 * min_cost(cost[], x - 1, y - 1))
 */


#include <iostream>
using std::cout;
using std::endl;
using std::min;

const int R = 3;
const int C = 3;
/*
 * @params:
 * cost[] : The cost matrix.
 * x: the xth row.
 * y: the yth column.
 */

// A utility to minimum the three numbers.
int minimum_three(int r, int s, int t)
{
    return min(min(r, s), t);
}

int min_cost(int cost[R][C], int x, int y) {
    if (x == 0 && y == 0)
        return cost[x][y];
        // If the item is in the first row.
    else if (x == 0)
        return cost[x][y] + min_cost(cost, x, y - 1);
        // If the item is in the first column.
    else if (y == 0)
        return cost[x][y] + min_cost(cost, x - 1, y);
    else
        return cost[x][y] +
               minimum_three(min_cost(cost, x - 1, y), min_cost(cost, x, y - 1), min_cost(cost, x - 1, y - 1));
}

int main()
{
    int cost[R][C]  = { {1, 2, 3},
                        {4, 8, 2},
                        {1, 5, 3}};
    cout << min_cost(cost, 2, 2);
    return 0;
}



