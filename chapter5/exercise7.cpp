//
// Created by wangzhen on 16/02/2017.
//

#include <iostream>
#include <string>

struct car_type
{
    std::string make;
    std::string year;
};

int main(void)
{

    using namespace std;
    cout << "How many cars do you wish to catelog? ";
    int num;
    (cin >> num).get();

    car_type *pcar = new car_type[num];

    for (int i = 0; i < num; ++i)
    {
        cout << "Car#" << i + 1 << endl;
        cout << "Please enter the make :";
        getline(cin, (pcar + i)->make);
        cout << "Please enter the year made: ";
        getline(cin, (pcar + i)->year);
    }

    cout << "Here is your collection:\n";
    for (int i = 0; i < num; ++i)
        cout << (pcar + i)->year << "\t" << (pcar + i)->make << endl;

    return 0;

}