//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>
#include <fstream>
#include <string>

struct contributor
{
    std::string name;
    float money;
};

int main(void)
{
    using std::ifstream;
    using std::cout;
    using std::endl;

    ifstream if_obj;
    if_obj.open("contribution_info.txt");
    if (!if_obj.is_open()){
        cout << "Open file failed \n";
        return -1;
    }
    int num;
    (if_obj >> num).get();
    if (num == 0)
    {
        cout << "none \n";
        return 0;
    }
    contributor *pc = new contributor[num];

    for (int i = 0; i < num; ++i) {
        getline(if_obj, (pc + i)->name);
        (if_obj >> (pc + i)->money).get();
        //(if_obj >> (pc + i)->money);
    }

    for (int i = 0; i < num; ++i)
        if ((pc + i)-> money >= 10000)
            cout << "Grand Patrons : " << (pc + i)->name  << endl;

    for (int i = 0; i < num; ++i)
        if ((pc + i)->money < 10000)
            cout << "Patrons :" << (pc + i)->name << endl;

    return 0;
}