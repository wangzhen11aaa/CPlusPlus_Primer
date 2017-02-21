//
// Created by wangzhen on 21/02/2017.
//
#include "golf.h"

void setgolf(golf &g, const char *name, int hc) // non-interactive version.
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)//interactive version.
{
    using std::cout;
    using std::cin;

    char *pc = new char[Len];
    int count;
    cout << "Enter name \n";
    cin.getline(pc, Len);
    if (pc[0] == '\0' || cin.eof()){
        return 0;
    }
    else
    {
        cout << "Enter handicap : ";
        (cin >> count).get();
        setgolf(g, pc, count);
        delete [] pc;
        return 1;
    }
}
void handicap(golf &g, int hc) // function resets handicap to a new value
{
    g.handicap = hc;
}

void showgolf(const golf &g) // function displays contents of golf structure
{
    using std::cout;
    using std::endl;
    cout << "name :" << g.fullname << " handicap :" << g.handicap << endl;
}


