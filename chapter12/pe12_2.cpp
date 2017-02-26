//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include "string2.h"

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    String s1(" And I am a C++ student.");

    String s3;

    cout << s1 << endl;
    cout << "Please enter your name: \n";
    cin >> s3;

    String s2;
    s2 = "My nane is " + s3;
    cout << s2 << endl;

    s2 = s2 + s1;
    s2.stringup();

    cout << "The string \n" << s2 << "\n contains" << s2.count('A')
            << " 'A' characters in it .\n";
    s1 = "red";

    String rgb[3] = {String(s1), String("green"), String("blue")};
    cout << "Enter the name of a primary color for mixing light :";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow();
        for(int i = 0; i < 3; ++i)
        {
            if (ans == rgb[i])
            {
                cout << "That's right \n";
                success = true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "Try again \n";
    }
    cout << "Bye \n";
    return 0;
}