//
// Created by wangzhen on 13/02/2017.
//

#include <iostream>

int main(void)
{
    using namespace std;
    const float khundred_km_to_miles = 62.14;
    const float kone_gallon_to_liter = 3.875;

    float gas_liter_consumption_per_hundred_km;
    cout <<"Enter the liter of gas consumption per 100 km \n";
    cin >> gas_liter_consumption_per_hundred_km;

    cout << "mpg in US unit is " << (1 / gas_liter_consumption_per_hundred_km) * khundred_km_to_miles * kone_gallon_to_liter << endl;

}