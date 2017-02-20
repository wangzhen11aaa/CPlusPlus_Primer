//
// Created by wangzhen on 20/02/2017.
//

#include <iostream>
#include <string>
#include <cctype>

using std::string;

void toupper_string(string &str);

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    string input;
    cout << "Enter a string (q to quit) :";
    getline(cin, input);
    while (input != "q") {
        toupper_string(input);
        cout << input << endl;
        getline(cin, input);
    }
    return 0;

}

void toupper_string(string &str)
{
    string temp = str;
    int str_len = str.length();
    while (str_len-- > 0)
        str.at(str_len) = toupper(temp.at(str_len));
}