//
// Created by wangzhen on 25/02/2017.
//

#include <iostream>
#include "Stonewt_m.h"

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    Stonewt arr[6] = {Stonewt(110.0),Stonewt(12, 1.0), Stonewt()};
    cout << "Enter pounds for new object.\n";
    for (int i = 3; i < 6; ++i)
    {
        double temp_pounds;
        cin >> temp_pounds;
        arr[i].set_pounds(temp_pounds);
    }

    Stonewt min_stonewt;
    Stonewt max_stonewt;
    min_stonewt = max_stonewt = arr[0];
    int ele_count  = 0;
    for (int j = 0; j < 6; ++j)
    {
        if (arr[j] > 11.0 * Stonewt::Lbs_per_stn)
            ++ele_count;
        if (min_stonewt > arr[j])
            min_stonewt = arr[j];
        if (max_stonewt < arr[j])
            max_stonewt = arr[j];
    }
    cout << "Minimum stonewt : ";
    min_stonewt.show_lbs();
    cout << "Maximum stonewt : ";
    max_stonewt.show_lbs();

    cout << ele_count << " Surpasses 11 stone\n";
    return 0;
}