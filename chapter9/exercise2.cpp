//
// Created by wangzhen on 21/02/2017.
//

#include <iostream>
#include <string> // this library is no longer necessary
using std::string;

// function prototype
void strcount(const string str);

int main()
{
    using namespace std;
    string input;

    cout << "Enter line (empty line to quit):\n";
    while (getline(cin,input) && input != "")
        strcount(input);
    return 0;
}

void strcount(const string str)
{
    using std::cout;
    static int total = 0;

    total += str.size();
    cout << str.size() << " characters\n";
    cout << total << " characters total\n";
    return;
}