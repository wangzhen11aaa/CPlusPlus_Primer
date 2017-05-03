//
// Created by wangzhen on 03/05/2017.
//

// print all permutations of one string

#include <iostream>
using std::cout;
using std::endl;

// Swap the item in the array.
void swap(char arr[], int i, int j) {
    char temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}
/* recursive function to generate all permutations.
 * @paras:
 * arr[]: the spaces store the chars
 * i :    the index of item to be swapped with the followers
 * n :    the last index in the arr
 */
void perm(char arr[], int i, int n)
{
    if (i == n)
    {
        cout << arr << endl;
        return;
    }
    else
    {
        for (int j = i; j <= n; ++j)
        {
            swap(arr, i, j);
            perm(arr, i + 1, n);
            swap(arr, i, j);
        }
    }
}
int main()
{
    char array[5] = "ABCD";
    perm(array, 0, 3);
}
