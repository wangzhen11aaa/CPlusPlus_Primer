//
// Created by wangzhen on 20/02/2017.
//

#include <iostream>
using namespace std;

#include <cstring> // for strlen(), strcpy()

struct stringy {
    char * str; //points to a string
    int ct;     // length of string (not counting '\0')
};

// prototypes for set(), show, and show() go here
void set(stringy & t, char * s);
void show(const stringy & sty, int count = 1);
void show(const char * sty, int count = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);
    show(testing, 3);

    show("Done");

}
void set(stringy &t, char * s)
{
    int str_len = strlen(s);
    t.str = new char[str_len + 1];
    strcpy(t.str, s);
    t.ct = str_len;

}

void show(const stringy & sty, int count)
{
    for (int i = 0; i < count; ++i) {
        std::cout << sty.str << std::endl;
        std::cout << sty.ct << std::endl;
    }
}
void show(const char *sty, int count)
{
    for (int i = 0; i < count; ++i)
        std::cout << sty << std::endl;
}