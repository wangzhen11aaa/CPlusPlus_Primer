//
// Created by wangzhen on 05/05/2017.
//

#include<iostream>
#include<string>
using std::string;
using std::min;
using std::cout;
using std::endl;


/*
 * top-bottom problem, the index will be converge from the largest to the minimum.
 * How to represent the problem, when in the kth layer recursive, remove item
 * from str1, insert item to str1, or update item to str1.
 * - when insert item into str1 to match str2[j], then the sub problem will be edit_distance(str1[i], str2[j-1]).
 * - when remove item from str1 to avoid matching str2[j], then the sub problem will be edit(str1[i-1], str2[j]).
 * - when update item in str1 to match str2[j], then the sub problem will be edit_distance(str1[i-1], str2[j-1])
 * How to represent the problem, when str1[i] equals str2[j].
 * - When str1[i] equals str2[j], then the sub problem will be edit_distance(str1[i-1], str2[j-1]).
 * How to represent the problem, when str1 or str2 is a empty string.
 * - if i == 0 or j == 0 , then the edit_distance(str1, str2) equals len(strx), strx is not empty.
 */

/*
 * Utility function to find the minimum number in 3 numbers.
 */
int minimum (int x, int y, int z)
{
    return min( min(x,y), z);
}

/*
 * m, n stands for length of string, m-1, n-1 stands for the index in the string to match.
 */
int editDist(string str1, string str2, int m, int n)
{
    if (m == 0)
        return n;
    if (n == 0)
        return m;

    if (str1[m-1] == str2[n-1])
        return editDist(str1, str2, m-1, n-1);
    return 1 + minimum(editDist(str1, str2, m, n-1), editDist(str1, str2, m -1, n), editDist(str1, str2, m - 1, n -1 ));
}

int main()
{
    string str1 = "sunday";
    string str2 = "saturday";
    cout << editDist(str1, str2, str1.length(), str2.length());
}
