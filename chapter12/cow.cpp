//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}
Cow::Cow(const char *nm, const char *ho, double wt)
{
    if (strlen(nm) + 1 > 20) {
        std::cout << "name too long \n";
    }
    else {
//name = new char[strlen(nm) + 1];
        strcpy(name, nm);
        hobby = new char[strlen(ho) + 1];
        strcpy(hobby, ho);
        weight = wt;
    }
}

// copy constructor.
Cow::Cow(const Cow &c)
{
 //   name = new char[strlen(c.name) + 1];
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    std::cout << "name: " << name << " ,hobby : " << hobby << ", weight :" << weight << " dead" << std::endl;
    delete [] hobby;
}

Cow & Cow::operator=(const Cow &c)
{
    if (this == &c)
        return *this;
    strcpy(name, c.name);
    delete [] hobby; // free old spaces.
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    std::cout << "name: " << name << " ,hobby : " << hobby << ", weight " << weight << std::endl;
}
