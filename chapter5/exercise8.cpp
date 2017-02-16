//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>
#include <cstring>

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;


    int count = 0;
    char input[20];
    cout << "Enter your words (to stop, type the word done)";
    do
    {
        cin >> input;
        ++count;
    }while (strcmp(input, "done") != 0);

    cout << "You Input" << count <<  "words \n";

    return 0;
}