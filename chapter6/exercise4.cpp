//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>
#include <string>
#include <cstring>

const int strsize = 20;
const int member = 2;
using namespace std;

void show_menu(void);

struct bop {
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize]; // secret BOP name
    char perference[strsize]; // 0 = fullname, 1 = title, 2 = bopname
};

int main(void)
{
    show_menu();
    bop *bop_member = new bop[member];
    cout << "Enter fullname, title, bopname, perference by line :";
    cin.getline((bop_member)->fullname, strsize);
    cin.getline((bop_member)->title, strsize);
    cin.getline((bop_member)->bopname, strsize);
    cin.getline((bop_member)->perference, strsize);

    for (int i = 1; i < member ; ++i)
    {
        strcpy((bop_member + 1)->fullname, "Thomas");
        strcpy((bop_member + 1)->title , "Good pop");
        strcpy((bop_member + 1)->bopname , "T");
        strcpy((bop_member + 1)->perference ,"TTT");
    }

    char c;
    cout << "Enter your choice :";
    cin >> c;
    while (c != 'a' && c != 'b' && c != 'c' && c != 'd' && c != 'q')
    {
        cout << "Enter a a, b, c, d, q :";
        cin >> c;
    }

    switch (c){
        case 'a': for (int i = 0; i < member; ++i)
                    cout << (bop_member + i)->fullname << endl;
            break;
        case 'b': for (int i = 0; i < member; ++i)
                    cout << (bop_member + i)->title << endl;
            break;
        case 'c': for (int i = 0; i < member; ++i)
                cout << (bop_member + i)->bopname << endl;
            break;
        case 'd': for (int i = 0; i < member; ++i)
                cout << (bop_member + i)->perference << endl;
            break;
        case 'q':
            break;

    }

    return 0;
}

void show_menu(void)
{
    cout << "a. display by name   \t" << "b. display by title \n";
    cout << "c. display by botname\t" << "d. display by preference \n";
    cout << "q. quit\n";
}


