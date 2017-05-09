//
// Created by wangzhen on 09/05/2017.
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
/*
 * Utility to get maximum number.
 */
int max(int x, int y)
{
    return ((x > y)? x : y);
}

/*
 * recursive: top-bottom problem.
 * standard expression: longest_palindromic(str, s, e) = 2 + longest_palindromic(s1 + 1, e - 1)) if str[s] == str[e] and s != e
 *                      longest_palindromic(str, s, e) = 1 + longest_palindromic(s1 + 1, e - 1)) if str[s] != str[e]
 */

int longest_palindromic(string str, int s, int e)
{
    if (s == e)
        return 1;
    if (s > e)
        return 0;
    if (str[s] == str[e])
        return 2 + longest_palindromic(str, s + 1, e - 1);
    return max(longest_palindromic(str, s+1, e), longest_palindromic(str, s, e-1));
}

int main()
{
    string str("BBABCBCAB");
    int size = str.length();
    cout << "Longest str is " << longest_palindromic(str, 0, size - 1);
}