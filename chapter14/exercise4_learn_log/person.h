//
// Created by wangzhen on 04/03/2017.
//

#ifndef CPP_BOOK_PERSON_H
#define CPP_BOOK_PERSON_H

#include <iostream>
using std::string;

class Person
{
private:
    string __first_name;
    string __last_name;
public:
    Person():__first_name("name"), __last_name("default") { std::cout << "abc \n";}
    Person(const string first_name, const string last_name): __first_name(first_name), __last_name(last_name){}
    virtual void Show() const;
};

class Gunslinger: virtual public Person
{
private:
    double __draw_time;
public:
    Gunslinger(): Person(), __draw_time(0.5) { std::cout << "in gunslinger\n";}
    virtual void Show() const;
    void Data() const;
    Gunslinger(Person & p, double draw_time = 0.5): Person(p), __draw_time(draw_time) {}
    Gunslinger(string first_name, string last_name, double draw_time = 0.5): Person(first_name, last_name), __draw_time(draw_time) {}
    virtual void Draw() const { std::cout <<  __draw_time << std::endl;}
};

class PorkerPlayer: virtual public Person
{
private:
    int __card_number;
public:
    PorkerPlayer(): Person(), __card_number(1){}
    virtual void Show() const;
    void Data() const;
    virtual void Draw() const { std::cout << __card_number << std::endl;}
    PorkerPlayer(Person &p, int card_number = 1): Person(p), __card_number(card_number) {}
    PorkerPlayer(string first_name, string last_name, int card_number = 1): Person(first_name, last_name), __card_number(card_number) {}
};


class BadDude : public Gunslinger, public PorkerPlayer
{
private:

public:
    virtual void Show() const;
    BadDude() {}
    BadDude(const string & first_name, const string &last_name, double draw_time = 0.3, int card_number = 2):Person(first_name, last_name)
            , Gunslinger(first_name, last_name, draw_time), PorkerPlayer(first_name, last_name, card_number){}
    BadDude(Gunslinger &gs, int card_number = 2):Person(gs), Gunslinger(gs), PorkerPlayer(gs, card_number) {}
    BadDude(PorkerPlayer &ps, double draw_time = 0.3):Person(ps), Gunslinger(ps, draw_time), PorkerPlayer(ps) {}
    virtual void Gdraw() const;//{ Gunslinger::Draw();}
    virtual void Cdraw() const; //{ PorkerPlayer::Draw();}
};
#endif //CPP_BOOK_PERSON_H
