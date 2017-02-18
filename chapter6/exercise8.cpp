//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>
#include <fstream>

int main(void)
{
    using namespace std;

    ifstream read_obj;
    read_obj.open("exercise8.cpp");
    if (!read_obj.is_open()) {
        cout << "Open file failed \n";
        return -1;
    }
    char a;
    read_obj.get(a);
    int c = 0;
    while (!read_obj.eof()) {
        ++c;
        read_obj.get(a);
    }
    cout << "Total characters :" << c << endl;
    return  0;
}