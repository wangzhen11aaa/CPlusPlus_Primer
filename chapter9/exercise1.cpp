//
// Created by wangzhen on 21/02/2017.
//

#include "golf.h"

const int knum = 10;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    golf *arr = new golf[knum];

    //static arr_count = 0; // static variable count valid golfs.
    for (int i = 0; i < knum && setgolf(arr[i]); ++i);

    for (int i = 0; i < knum; ++i)
        showgolf(arr[i]);

    golf *arr1 = new golf[knum];
    cout << "Enter golf name \n";
    for (int i = 0; i < knum; ++i)
    {
        char temp_arr[Len];

        cin.getline(temp_arr, Len);
        if (temp_arr[0] == '\0' || cin.eof())
            break;
        else
        {
            int hc;
            cout <<  "Enter handicap \n";
            (cin >> hc).get();
            setgolf(arr1[0], temp_arr, hc);
        }
    }

    for (int i = 0; i < knum; ++i)
        showgolf(arr[i]);

    delete [] arr;
    delete [] arr1;
}