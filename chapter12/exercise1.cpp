//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include "cow.h"

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    Cow one;
    one.ShowCow();
    Cow two ("Leif", "photo & dairy", 130);
    two.ShowCow();
    one = two;
    cout << "Two identical cows named Leif : \n";
    one.ShowCow();
    two.ShowCow();
    Cow three = one;
    three.ShowCow();
}