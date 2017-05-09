//
// Created by wangzhen on 09/05/2017.
//

/*
 * dynamic program: bottom-top.
 * target: maximum the price we will earn, which we call it optimize_price and the optimize_price[k] stands for optimized
 * price when the length of rode is n.
 * standard equation:
 * optimized_price[k] = maximum(price[i] + optimized_price[k - i - 1]) for i in [0, k]
 */

#include <iostream>
using std::cout;

//utility to maximum two numbers
int max(int x, int y)
{
    return (x > y)? x : y;
}

int cutRod(int price[], int n)
{
    int optimized_price[n + 1];

    optimized_price[0] = 0;

    for (int i = 1; i <= n; i++) {
        int max_price = INT_MIN;
        for (int j = 0; j < i; j++)
            max_price = max(max_price, price[j] + optimized_price[i-j-1]);
        optimized_price[i] = max_price;
    }
    return optimized_price[n];
}

int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << cutRod(arr, size);
    return 0;
}
