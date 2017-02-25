//
// Created by wangzhen on 25/02/2017.
//

#include <iostream>
#include <cstdlib> //srand and rand function.
#include <ctime>
#include <climits>
#include <fstream>
#include "vector_m.h"

int main(void)
{
    using std::ofstream;
    using std::cout;
    using std::cin;
    using std::endl;

    using VECTOR::Vector;
    srand(time(0));

    Vector step;
    Vector result(0.0, 0.0);

    unsigned long total_steps = 0;
    double target;
    double dstep;
    double direction;

    ofstream of_obj;
    of_obj.open("vector_3.log");
    if (!of_obj.is_open())
    {
        cout << "Open file failed \n";
        return -1;
    }
    cout << "Enter target distance (q to quit)";
    while (cin >> target)
    {
        cout << "Enter step length : \n";
        if (!(cin>>dstep))
        {
            break;
        }
        int trial_times;
        cout << "Enter trial times \n";
        if (!(cin>>trial_times))
            break;
        unsigned long max_trial_steps = 0;
        unsigned long min_trial_steps = ULONG_MAX;
        int t = trial_times;
        while (t-- > 0)
        {
            unsigned long trial_steps = 0;
            while (result.magval() < target){
                direction = rand() % 360;
                step.reset(dstep, direction);
                result = result + step;
                trial_steps++;
                total_steps++;
            }
            if (max_trial_steps < trial_steps)
                max_trial_steps = trial_steps;
            if (min_trial_steps > trial_steps)
                min_trial_steps = trial_steps;
            result.reset(0.0, 0.0);
        }
        of_obj << "The max trial :" << max_trial_steps << " in (distance, dstep) = ("
        << target << " ," << dstep << ") \n";
        of_obj << "The min trial :" << min_trial_steps << " in (distance, dstep) = ("
        << target << " ," << dstep << ") \n";
        of_obj << "The average step in all trials :" << target * trial_times / total_steps << endl;

        cout << "Enter target distance (q to quit)\n";
    }


}
