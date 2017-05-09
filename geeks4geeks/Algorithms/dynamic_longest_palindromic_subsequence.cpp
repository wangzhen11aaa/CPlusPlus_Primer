//
// Created by wangzhen on 09/05/2017.

/*
 * Dynamic program. bottom-top
 * The standard expression:
 * The length of longest_palindromic(str, s, e) is e - s + 1. If added another char, there will be four cases.
 * if str[s] == str[e + 1], then longest_palindromic(str, s, e + 1) = 2 + longest_palindromic(str, s + 1, e).
 * The following will be three cases
 * if str[s] != str[e + 1], then longest_palindromic(str, s, e + 1) = max(longest_palindromic(str, s + 1, e), longest_palindromic(str, s, e + 1)).
 * Coordinate (s, e) depends on (s - 1, e - 1), (s, e - 1), (s + 1, e), and their lengths are  L -2 , L - 1, L - 1 respectively.
 */


#include<stdio.h>
#include<string.h>

// A utility function to get max of two integers
int max (int x, int y) { return (x > y)? x : y; }

// Returns the length of the longest palindromic subsequence in seq
int lps(char *str)
{
    int n = strlen(str);
    int i, j, cl;
    int L[n][n];  // Create a table to store results of subproblems


    // Strings of length 1 are palindrome of lentgh 1
    for (i = 0; i < n; i++)
        L[i][i] = 1;

    // Build the table. cl is length of
    // substring
    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
                L[i][j] = 2;
            else if (str[i] == str[j])
                L[i][j] = L[i+1][j-1] + 2;
            else
                L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }

    return L[0][n-1];
}

/* Driver program to test above functions */
int main()
{
    char seq[] = "GEEKS FOR GEEKS";
    int n = strlen(seq);
    printf ("The lnegth of the LPS is %d", lps(seq));
    getchar();
    return 0;
}
