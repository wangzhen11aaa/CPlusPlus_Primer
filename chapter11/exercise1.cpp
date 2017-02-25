//
// Created by wangzhen on 24/02/2017.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vector.h"

int main(void)
{
    using std::ofstream;
    using std::cout;
    using std::cin;

    using VECTOR::Vector;

    srand(time(0)); // seed random-number generator

    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream of_obj;
    of_obj.open("vector.log");
    if (!of_obj.is_open())
    {
        cout << "Open file failed \n";
        return -1;
    }
    cout << "Enter target distance (q to quit)";
    while (cin >> target) {
        cout << "Enter step length :\n";
        if (!(cin >> dstep))
            break;
        of_obj << "Target Distance :" << target << ", " << "Step Size : " << dstep << std::endl;
        while (result.magval() < target) {
            direction = (random() % 360);
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            of_obj << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")\n";
        }
        of_obj << "After " << steps << " steps, the subject "
        << " has the following location: \n";
        of_obj << result << std::endl;

        result.polar_mode();
        of_obj << "or \n" << result << std::endl;
        of_obj << "Average outward distance per step = "
        << result.magval() / steps << std::endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit)";
    }
    of_obj << "Bye !\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}
