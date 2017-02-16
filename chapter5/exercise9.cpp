//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>
#include <string>

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    int count = 0;
    string input;
    cout << "Enter your words (to stop, type the word done)";
    do
    {
        cin >> input;
        ++count;
    }while (input != "done");

    cout << "You Input " << count <<  " words \n";

    return 0;
}