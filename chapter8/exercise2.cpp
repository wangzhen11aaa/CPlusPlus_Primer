//
// Created by wangzhen on 20/02/2017.
//

#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    double weight;
    int calories;
};

void set(CandyBar &t, char *pc, double wt, int cl);
void show(const CandyBar &t);

int main(void)
{
    CandyBar c;
    char name[20] = "abc";
    set(c, name, 2.85, 350);
    show(c);
    return 0;
}

void set(CandyBar &t, char *pc, double wt, int cl)
{
    t.name = pc;
    t.weight = wt;
    t.calories =cl;
}
void show(const CandyBar &t)
{
    std::cout << t.name << "\t" << t.weight << "\t" << t.calories << std::endl;
}