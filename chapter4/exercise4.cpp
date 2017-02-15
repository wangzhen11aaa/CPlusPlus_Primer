//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string fn;
    cout << "Enter your first name: ";
    getline(cin, fn);

    string ln;
    cout << "Enter your last name :";
    getline(cin, ln);

    string full_name;
    full_name = ln + ", " + fn;
    cout << "Here is the information in single string :" << full_name << endl;

    return 0;
}