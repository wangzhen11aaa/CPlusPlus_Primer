//
// Created by wangzhen on 04/03/2017.
//

#ifndef CPP_BOOK_PERSON_H
#define CPP_BOOK_PERSON_H

#include <iostream>
#include <string>
#include <cctype>
#include <ctime>

class Card
{
private:
    char __suit; // card suit
    int __face; // card Face value
public:
    Card(): __suit('c'), __face(2) {} //initialize suit character to first letter of Suit, and face to int value
    Card(char st, int fc);
    std::string getsuit() const; //getsuit returns full string name of card suit
    int getface() const { return __face;}

};

class Person
{
private:
    std::string __first_name;
    std::string __last_name;
public:
    Person(std::string fn = "not first", std::string ln = "not last"): __first_name(fn), __last_name(fn) {}
    virtual void Show const{ std::cout << "first name" << __first_name << "last_name : " << __last_name;}
    friend std::ostream &operator<<(std::ostream &os, const Person &p); // friend to class Person

};

class Gunslinger: virtual

#endif //CPP_BOOK_PERSON_H
