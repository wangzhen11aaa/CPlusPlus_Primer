//
// Created by wangzhen on 13/02/2017.
//
#include <iostream>

int main(void)
{
    using namespace std;
    float driven_distance_in_km;
    float gas_used;

    cout << "Input kilometers you have driven and petrol liters you have used :";
    cin >> driven_distance_in_km >> gas_used;
    cout << gas_used / driven_distance_in_km * 100 << " liters per 100 kilometers \n";
    return 0;
};