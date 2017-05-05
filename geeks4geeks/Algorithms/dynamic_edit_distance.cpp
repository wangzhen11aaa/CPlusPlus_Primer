//
// Created by wangzhen on 05/05/2017.
//

/*
 * bottom-top problem. Dynamic programming
 */

#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;
using std::min;

/*
 * We use the dp to restore the intermediate result.
 * Matrix like this
 *     0, 1, 2, 3, 4 ...   len(str1)
 *   0
 *   1
 *   2
 *   3
 *   .
 *   .
 *   .
 * len(str2)
 *  m_i_j in the dp store the minimum steps to make two sub strings str1[0:i],str2[0:j] to the same.
 *
 */

int minimum_three(int x, int y, int z)
{
    return min(min(x, y), z);
}

int dp_edit_distance(string str1, string str2)
{
    int len1 = str1.length();
    int len2 = str2.length();

    int dp[len2 + 1][len1 + 1];

    for (int i = 0; i <= len2; i++)
        for (int j = 0; j <= len1; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (str2[i - 1] == str1[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + minimum_three(dp[i - 1][j - 1], // replace
                                             dp[i - 1][j], //remove str2[i] then dp[i-1][j] stands for distance (str2[0,i-1], str1[0,j])
                                             dp[i][j - 1]); //insert str1[


        }
    return dp[len2][len1];
}

int main()
{
    string str1 = "sunday";
    string str2 = "saturday";
    cout << dp_edit_distance(str1, str2) << endl;
    return 0;
}