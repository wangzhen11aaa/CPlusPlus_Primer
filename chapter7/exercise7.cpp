//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>

double * fill_array(double arr[], int arr_size);
void show_array(double * arr_start , double * arr_end);
void reverse_array(double * arr_start, double * arr_end);

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int karray_size  = 10;
    cout << "Enter up to 10 numbers, non-numeric value will terminates input \n";
    double m_arr[karray_size];
    double * m_arr_end = fill_array(m_arr, karray_size);
    show_array(m_arr, m_arr_end);
    cout << endl;
    reverse_array(m_arr, m_arr_end);
    show_array(m_arr, m_arr_end);
    cout << endl;
    return 0;
}

double * fill_array(double arr[], int arr_size)
{
    int i = 0;
    //while(arr_size-- > 0 && std::cin >> arr[i]) ++i;
    while(arr_size-- > 0 && std::cin >> arr[i] && ++i);
    return arr + i;
}

void show_array(double * arr_start, double * arr_end)
{
    while (arr_start != arr_end)
        std::cout << *(arr_start++) << "\t";
}

void reverse_array(double * arr_start, double * arr_end)
{
    for (double *rt_b = arr_start + 1, *rt_e = arr_end - 2; rt_b < rt_e; ++rt_b, --rt_e)
    {
        double sum = *rt_b + *rt_e;
        *rt_b = sum - *rt_b;
        *rt_e = sum - *rt_b;
    }
}
