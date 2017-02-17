//
// Created by wangzhen on 17/02/2017.
//

#include <iostream>
#include <cctype>

int main(void)
{
    using namespace std;

    char ch;
    cout << "Enter @ to terminate input\n";
    cin.get(ch);
    while (ch != '@')
    {
        if (isdigit(ch)) {
            cin.get(ch);
            continue;
        }
        else if (isupper(ch))
            cout.put(tolower(ch));
        else if (islower(ch))
            cout.put(toupper(ch));
        else
            cout.put(ch);
        cin.get(ch);
    }
    return 0;
}