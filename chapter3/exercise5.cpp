//
// Created by wangzhen on 13/02/2017.
//

#include <iostream>
#include <climits>
#include <cassert>

int main()
{
    using namespace std;
    unsigned long world_population;
    cout << "Enter the world's population: ";
    cin >> world_population;
    assert (world_population <= ULONG_MAX);

    unsigned long us_population;
    cout << "Enter the population of the US :";
    cin >> us_population;
    assert (us_population <= world_population);

    cout << "The population of the US is " << static_cast<float> (us_population) / static_cast<float> (world_population) * 100 \
                    << "% of the world population. \n";

    return 0;

}