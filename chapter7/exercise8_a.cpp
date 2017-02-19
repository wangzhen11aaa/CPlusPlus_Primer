//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>
#include <string>


const int Season = 4;
const char * season[Season] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double *, int);
void show(const double *k, int);

int main(void)
{
    double expenses[Season];

    fill(expenses, Season);
    show(expenses, Season);

    return 0;
}

void fill(double *expenses, int size) {
    using namespace std;

    for (int i = 0; i < size; i++) {
        cout << "Enter " << season[i] << " expenses: ";
        cin >> expenses[i];
    }
}

void show(const double *expenses, int size) {
    using namespace std;

    double total = 0.0;

    cout << "\nEXPENSES\n";

    for (int i = 0; i < size; i++) {
        cout << season[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }

    cout << "Total Expenses: $" << total << endl;
}