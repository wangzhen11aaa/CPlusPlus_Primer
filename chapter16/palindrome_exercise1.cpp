//
// Created by wangzhen on 06/03/2017.
//

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool ispalindrome(string &str);
int main(void)
{

    cout <<"Input a string, give the answer about whether it is a palindrome (Enter q to quit) \n";
    string test_string;

    while(cin >> test_string && test_string != "q")
    {
        cout << "Result : " << test_string << " is palindrome " << ispalindrome(test_string) << endl;
    }
}

bool ispalindrome(string &str)
{
    int str_len = str.length();
    int i, j;
    for(i = 0, j = str_len - 1; i < j; ++i, --j)
        if(str[i] != str[j])
            break;
    if (i < j)
        return false;
    else
        return true;
}