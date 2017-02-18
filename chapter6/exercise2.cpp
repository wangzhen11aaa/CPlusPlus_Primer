//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>

int main(void)
{
    using namespace std;
    //double d_array[10] = {0};  // give up this method for saving loop times.
    double d_array[10] ;
    cout << "Enter numbers (use non-numeric input to terminate inputting) \n";
    int i = 0;
    double sum = 0.0;
    for (; i < 10 ; sum += d_array[i++]) {
        cin >> d_array[i]; // When input non-numeric, no data will be stored into the array, what's more the cin.fail()
                            // will return true because of mismatch.
        if (cin.fail())
            break;
    }
    cin.clear(); // Reset cin status at last for non-numeric input

    if (i != 0 ) {
        double average = sum / i;
        int c = 0;
        for (int j = 0; j <= i; ++j)
            if (average > d_array[j])
                ++c;
        cout << "The average number of your input is :" << average << endl;
        cout << "There are " << c << " numbers larger the average. \n";

    }
    else
        cout << "You input 0 numbers \n";
}