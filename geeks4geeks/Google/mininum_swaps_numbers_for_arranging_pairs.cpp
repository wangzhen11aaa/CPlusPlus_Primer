//
// Created by wangzhen on 26/04/2017.
//

/* Minimum number of swaps required for arranging pairs adjacent to each others
 *
 * There are n-pairs and therefore 2n people. everyone has one unique number ranging from 1 to 2n.
 * All these 2n persons are arranged in random fashion in an Array of size 2n. We are also given
 * who is partner of whom. Find the minimum number of swaps required to arrange these pairs such
 * that all pairs become adjacent to each other.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::min;
/* We use the recursive method and return the minimum number of swaps */
/* (a0,a4,a5,a1,a3,a2) partner map(a0<->a1, a4<->a5, a2<->a3),These series in array will be recursively
 * by two methods: 1. swap a4 with a1, result in (a0,a1) and (a5,a4,a3,a2) left; 2. swap a0 with a5, result in
 * (a5, a4) and (a0,a1,a3,a2) left.
 */

void swap(int index_arr[], int arr[], int adjacent_arr[], int item_to_swap, int item_to_pair);
/*
 * @parameters:
 * index_arr[] : Store the index in arr.
 * arr[] :  Store the status of arr.
 * adjacent_arr[]: Store the adjacent relation between number of the arr. arr[a0] = a1, arr[a1] = a0
 * index : Store the beginning point of this recursive function.
 * length : Total length of the arr.
 */
int swapUntil(int index_arr[], int arr[], int adjacent_arr[], int index, int length)
{
    // If the index greater than array length
    if (index > length)
        return 0;

    // If the first pair of array is adjacent.

    int first = arr[index];
    int second = arr[index + 1];

    // The result of the method a.

    if (adjacent_arr[first] == second)
        return swapUntil(index_arr, arr, adjacent_arr, index + 2, length);
    else
    {
        int item_to_swap = second;
        int item_to_pair = adjacent_arr[first];
        swap(index_arr, arr, adjacent_arr, item_to_swap, item_to_pair);
        // The number of swaps in the method a
        int method_a_rst = swapUntil(index_arr, arr, adjacent_arr, index + 2, length) + 1;
        // Reset the arr, and index_arr. Use method b
        swap(index_arr, arr, adjacent_arr, item_to_pair, item_to_swap);
        // Use method b
        item_to_swap = first;
        item_to_pair = second;

        int method_b_rst = swapUntil(index_arr, arr, adjacent_arr, index + 2, length) + 1;
        // Reset the arr and index_arr
        swap(index_arr, arr, adjacent_arr ,item_to_swap, item_to_pair);
        return min(method_a_rst, method_b_rst);

    }

}

/*
 * @ parameters:
 * index_arr[] : Store the index in arr.
 * arr[] : Store the status of arr.
 * adjacent_arr[]: Store the adjacent relation between number of the arr.
 * item_to_swap: The item used to swap with the true pair partner.
 * item_to_pair: The item used to be pair with the item in the first pair.
 *
 */
void swap(int index_arr[], int arr[], int adjacent_arr[], int item_to_swap, int item_to_pair)
{
    int index_item_to_swap = index_arr[item_to_swap];
    int index_item_to_pair = index_arr[item_to_pair];

    // Swap the values in array.
    int temp = item_to_swap;
    arr[index_item_to_swap] = item_to_pair;
    arr[index_item_to_pair] = temp;

    // Update the index of swapped value

    index_arr[item_to_swap] = index_item_to_pair;
    index_arr[item_to_pair] = index_item_to_swap;
}

int main(void)
{
    int index_arr[7];
    index_arr[1] = 5;
    index_arr[2] = 6;
    index_arr[3] = 1;
    index_arr[4] = 4;
    index_arr[5] = 2;
    index_arr[6] = 3;

    int adjacent_arr[7];
    adjacent_arr[1] = 3;
    adjacent_arr[2] = 6;
    adjacent_arr[3] = 1;
    adjacent_arr[4] = 5;
    adjacent_arr[5] = 4;
    adjacent_arr[6] = 2;

    int arr[7] = {0, 3, 5, 6, 4, 1, 2};
    int swap_num = swapUntil(index_arr, arr, adjacent_arr, 1, 6);
    cout << "minimum swap is " << swap_num << endl;
}

