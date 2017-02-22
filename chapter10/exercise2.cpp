//
// Created by wangzhen on 22/02/2017.
//

#include <iostream>
#include "person.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.show();
    cout << endl;
    one.FormalShow();

    two.show();
    cout << endl;
    two.FormalShow();

    three.show();
    cout << endl;
    three.FormalShow();
}