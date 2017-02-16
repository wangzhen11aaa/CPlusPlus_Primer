//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>

int main(void)
{
    using namespace std;
    int sum = 0;
    int tem;
    cout << "Enter your number one by one, 0 stands for terminate \n";
    cin >> tem;
    while(tem != 0)
    {
        sum += tem;
        cin >> tem;
    }
    cout << "Cumulative sum of entire data is " << sum << endl;
    return 0;
}