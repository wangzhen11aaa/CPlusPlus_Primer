//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>

int Fill_array(double array[], int arr_size);
void Show_array(const double array[], int valid_arr_size);
void Reverse_array(double array[], int valid_arr_size);

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;
    const int karray_size  = 10;
    cout << "Enter up to 10 numbers, non-numeric value will terminates input \n";
    double m_arr[karray_size];
    int valid_size = Fill_array(m_arr, karray_size);
    Show_array(m_arr, valid_size);
    cout << endl;
    Reverse_array(m_arr, valid_size);
    cout << "After reverse the array, the array will be \n";
    Show_array(m_arr, valid_size);
    cout << endl;
}

int Fill_array(double array[], int arr_size)
{
    int i = 0;
    while(arr_size-- > 0 && std::cin >> array[i])
        ++i;
    return i;
}

void Show_array(const double array[], int valid_arr_size)
{
    for (int i = 0; i < valid_arr_size; ++i)
        std::cout << array[i] << "\t";
}

void Reverse_array(double array[], int valid_arr_size)
{
    for (int i = 1, j = valid_arr_size - 2; i < j; ++i, --j)
    {
        int sum = array[i] + array[j];
        array[i] = sum - array[i];
        array[j] = sum - array[i];
    }
}

