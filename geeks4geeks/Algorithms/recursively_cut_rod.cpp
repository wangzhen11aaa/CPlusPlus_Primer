//
// Created by wangzhen on 09/05/2017.
//

#include <iostream>
using std::end;
using std::cout;

int max(int a, int b) {return (a > b)? a : b;}

int cutRod(int price[], int n)
{
    if (n == 0)
        return 0;
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int ret;
        if (n-i-1 >= 0)
            ret = price[i] + cutRod(price, n-i-1);
        else
            ret = 0;
        if (ret > max_val)
            max_val = ret;
    }
    return max_val;
}

int cutRod_v(int price[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int max_val = INT_MIN;
    // i < n guarantee that n -i -1 will be not less than 0.
    for (int i = 0; i < n; i++)
        max_val = max(max_val, price[i] + cutRod(price, n-i-1));
    return max_val;
}
int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << cutRod_v(arr, size);
    return 0;
}