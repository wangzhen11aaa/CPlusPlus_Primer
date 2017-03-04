//
// Created by wangzhen on 04/03/2017.
//

#include <iostream>
#include "person.h"

int main(void)
{
    //Person * p[3];
    //p[0] =  new BadDude;
    //p[1] =  new Gunslinger;
    //p[2] =  new PorkerPlayer;

    //p[0]->Gdraw();
    //p[0]->Cdraw();
    BadDude bd;
    Person &p = bd;
    p.Show();
    Gunslinger b;
    b.Data();
    return 0;
}