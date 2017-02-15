//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string name;
    cout << "Enter your name: \n";
    getline(cin, name);

    string dessert;
    cout << "Enter your favorite dessert: \n";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert;
    cout << " for you ," << name << ".\n";

    return 0;

}