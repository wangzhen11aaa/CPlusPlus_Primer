//
// Created by wangzhen on 28/02/2017.
//

#include <iostream>
#include "port.h"
#include "vintage.h"

int main() {
    using namespace std;

    Port sample1;
    Port sample2("Kings","Bright",30);
    Port sample3("NewOne","DarkRed",15);
    VintagePort sample4("Valley",10,"Family",1957);
    Port sample5(sample4);

    sample4 += 10;
    sample3 -= 5;
    sample1 = sample5;

    Port * pts[5] = {&sample1,&sample2,&sample3,&sample4,&sample5};

    for (int i = 0; i < 5; i++) {
        cout << "Sample#" << i+1 << ":" << endl;
        pts[i]->Show();
        cout << endl << endl;
    }

    cout << endl;
    VintagePort sample6("BlueCastle",20,"NewType",1920);

    cout << sample2 << endl;
    cout << sample6 << endl;

    cout << "\nBottle counts:\n";
    for (int i = 0; i < 5; i++)
        cout << "Sample #" << i + 1 << ": " << pts[i]->BottleCount() << " bottles " << endl;

    return 0;
}