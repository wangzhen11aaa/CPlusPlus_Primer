//
// Created by wangzhen on 06/03/2017.
//

#include <iostream>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool ispalindrome(string &str);

int main(void) {
    cout << "Enter a string (q to exit) \n";
    string test_str;
    while (getline(cin, test_str) && test_str != "q") {
        cout << "String " << test_str << " is palindrome " << ispalindrome(test_str);
    }
}

bool ispalindrome(string &str)
{
    int str_len = str.length();
    int i, j;
    for(i = 0, j = str_len - 1; i < j; ++i, --j)
    {
        while(!isalpha(str[i]) && i < j)
            ++i;
        while(!isalpha(str[j]) && i < j)
            --j;
        if(str[i] != tolower(str[j]) && str[i] != toupper(str[j]))
            break;
    }
    if (i < j)
        return false;
    else
        return true;
}

