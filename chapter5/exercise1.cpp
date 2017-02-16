//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>

int main(void)
{
    using namespace std;
    int start_num, end_num;
    cout << "Enter the start number and end number: \n";
    cin >> start_num >> end_num;

    int sum = 0;
    for (int i = start_num; i <= end_num; ++i)
        sum += i;

    cout << "Sum from " << start_num << " through " << end_num  << ": " << sum <<  endl;
    return 0;
}