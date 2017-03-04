//
// Created by wangzhen on 04/03/2017.
// Notice that scope-resolution operator used for invoke virtual methods.
// Line:25, without Gunslinger scope, This will be loop forever.
//

#include "person.h"
using std::cout;
using std::cin;
using std::endl;

void Person::Show() const
{
   cout << "last_name: " << __last_name << "\t" << "first_name :" << __first_name << endl;
}
// Gunslinger

void Gunslinger::Show() const
{
    //Person::Show();
    cout << "draw_time : " << __draw_time;
    Person::Show();
}

void Gunslinger::Data() const
{
    cout << "Dead cycling \n";
    Gunslinger::Show();
}

void PorkerPlayer::Show() const
{
    Person::Show();
    cout << "card number :" << __card_number;
}

void PorkerPlayer::Data() const
{
    PorkerPlayer::Show();
}

void BadDude::Show() const {
    cout << "BadDude show \n";
    Gunslinger::Data();
    //Gunslinger::Show();
}

void BadDude::Gdraw() const
{
    Gunslinger::Show();
}

void BadDude::Cdraw() const
{
    PorkerPlayer::Show();
}