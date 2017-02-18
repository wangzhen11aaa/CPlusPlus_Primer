//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>
#include <string>

struct contributor
{
    std::string name;
    float money;
};

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    int num;
    cout << "Enter the number of contributors :";
    (cin >> num).get();
    while (cin.fail() && num < 0)
    {
        cin.clear();
        cout << "Enter positive integers: ";
        (cin >> num).get();
    }

    if (num == 0)
    {
        cout << "none \n";
        return 0;
    }
    contributor *pc = new contributor[num];

    cout << "Enter the name and money contributed  \n";
    for (int i = 0; i < num; ++i) {
        getline(cin, (pc + i)->name);
        (cin >> (pc + i)->money).get();
    }

    for (int i = 0; i < num; ++i)
        if ((pc + i)-> money >= 10000)
            cout << "Grand Patrons : " << (pc + i)->name  << endl;

    for (int i = 0; i < num; ++i)
        if ((pc + i)->money < 10000)
            cout << "Patrons :" << (pc + i)->name << endl;

    return 0;
}