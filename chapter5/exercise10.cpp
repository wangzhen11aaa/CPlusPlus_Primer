//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter the number of rows :";
    int row;
    cin >> row;

    for (int i = 0; i < row; ++i) {
        for (int j = row - i - 1; j > 0; --j)
            cout << ".";
        for (int t =  i + 1; t > 0; --t)
            cout << "*";
        cout << endl;
    }


}