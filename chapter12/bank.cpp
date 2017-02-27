//
// Created by wangzhen on 27/02/2017.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main(void) {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    //setting things up

    std::srand(std::time(0)); // random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller \n";
    cout << "Enter maximum size of queue : ";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "Enter the number of simulation hours :";
    int hours;
    cin >> hours;

    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours;

    cout << "Enter the average number of customers per hour :";
    double perhour; // average # of arrival per hour
    cin >> perhour;
    double min_per_cust; // average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp; // new customer data
    long trunaways = 0; // turned away by full queue
    long customers = 0; // joined the queue
    long serverd = 0; // served during the simulation
    long sum_line = 0; // cumulative line length
    int wait_time = 0; // time until autoteller is free
    long line_wait = 0; // cumulative time in line

    // running the simulation
    for (int cycle = 0; cycle < cyclelimit; ++cycle) {
        if (newcustomer(min_per_cust)) // have customer
        {
            if (line.isfull()) {
                ++trunaways;
            }
            else {
                ++customers;
                temp.set(cycle); // cycle = time of arrival
                line.enqueue(temp);
            }
        }
        if (wait_time <= 0 && !line.isempty()) {
            line.dequeue(temp); // attend next customer
            wait_time = temp.ptime(); // for wait_time minutes;
            line_wait += cycle - temp.when();
            serverd++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();

    }
    if (customers > 0) {
        cout << "customers accepted :" << customers << endl;
        cout << " customers serverd :" << serverd << endl;
        cout << "   trunawys: " << trunaways << endl;
        cout << "Average queue size :";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "average wait time :" << (double) line_wait / serverd << " minutes \n";
    }
    else
        cout << "No customers! \n";
    cout << "Done! \n";
    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
