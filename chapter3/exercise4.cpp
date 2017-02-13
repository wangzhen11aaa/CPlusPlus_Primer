//
// Created by wangzhen on 13/02/2017.
//
#include <iostream>
#include <climits>
#include <cassert>

int main(void)
{
    using namespace std;
    const unsigned int kminute_to_second = 60;
    const unsigned int khour_to_second = 60 * 60;

    assert(60*60*24 <= UINT_MAX);
    const unsigned int kday_to_second = 60 * 60 * 24;


    unsigned long long num_sec;
    cout << "Enter the number of seconds:";
    cin >> num_sec;

    unsigned int days = num_sec / kday_to_second;
   // unsigned int hours = (num_sec - (days * kday_to_second)) / khour_to_second;
    unsigned int hours = (num_sec % kday_to_second) / khour_to_second;

   // unsigned int minutes = (num_sec -(days * kday_to_second + hours * khour_to_second)) / kminute_to_second;
    unsigned int minutes = (num_sec % khour_to_second) / kminute_to_second;
    unsigned int seconds = num_sec % kminute_to_second;

    cout << num_sec << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";
    return 0;
}
