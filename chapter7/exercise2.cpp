//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>

void show(const int arr[], int n);
int fill( int arr[], int n); // Fill the array.
float average(const int arr[], int m);

int main(void)
{
    const int knum = 10;
    int scores_arr[knum];
    std::cout << "Enter up to 10 golf scores \n";

    int valid_num;
    valid_num = fill(scores_arr, knum);
    if (!valid_num)
        std::cout << "Empty input \n";
    else
        std::cout << "Average score is " << average(scores_arr, valid_num) << std::endl;
}

void show(const int arr[], int n)
{
    std::cout << "Output from the end \n";
    while (n-- > 0)
        std::cout << *(arr + n) << std::endl;
}

 int fill(int arr[], int n)
{
    std::cout << "Enter negative number to terminate input \n";
    int i;
    for (i = 0; i < n; ++i) {
        std::cin >> arr[i];
        if (arr[i] < 0 or std::cin.fail())
            return i;
    }
    return i;
}

float average(const int arr[], int m)
{
    float sum = 0;
    for (int i = 0; i < m; ++i)
        sum += *(arr + i);
    return sum / m;
}
