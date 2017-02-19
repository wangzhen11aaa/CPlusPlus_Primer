//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>
#include <array>
#include <string>

// constant data
const int Seasons = 4;
const char * Snames[] = { "Spring", "Summer", "Fall", "Winter" };

struct exp {
    double expenses[Seasons];
};

void fill(exp*);
// function that uses array object without modifying it
void show(const exp*);

int main() {
    exp expenses;

    fill(&expenses);
    show(&expenses);

    return 0;
}

void fill(exp *expenses) {
    using namespace std;

    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> expenses->expenses[i];
    }
}

void show(const exp *expenses) {
    using namespace std;

    double total = 0.0;

    cout << "\nEXPENSES\n";

    for (int i = 0; i < Seasons; i++) {
        cout << Snames[i] << ": $" << expenses->expenses[i] << endl;
        total += expenses->expenses[i];
    }

    cout << "Total Expenses: $" << total << endl;
}