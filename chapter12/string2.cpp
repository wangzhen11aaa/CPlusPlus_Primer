//
// Created by wangzhen on 26/02/2017.
//

#include <iostream>
#include "string2.h"
#include <cstring>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

// initializing static class member .
int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

//class methods
String::String(const char *s) // constructor String from C string.
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s); // strcpy without namespace is also ok
    ++num_strings;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    ++num_strings;
}

String::String(const String &st)
{
    ++num_strings;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;
    delete [] str;
}

// overloaded operator methods

//Assign a String to a String

String & String::operator=(const String &st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// Assign a C string to a String
String &String::operator=(const char *s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

//read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

void String::stringlow()
{
    String temp = *this; // use copy constructor to create a local variable
    for (int i = 0; i < len; ++i)
        str[i] = tolower(temp.str[i]);
}

void String::stringup()
{
    String temp = *this; // use copy constructor to create a local variable
    for (int i = 0; i < len; ++i)
        str[i] = toupper(temp.str[i]);
}

unsigned int String::count(char a) const
{
    int c = 0;
    for (int i = 0; i < len; ++i)
        if (a == str[i])
            ++c;
    return c;
}

//overloaded operator friends

String operator+(const String &st1, const String &st2)
{
    int total_len = std::strlen(st1.str) + std::strlen(st2.str) + 1;
    char *temp_arr = new char [total_len + 1]; //allocate space by using new method
    std::strcpy(temp_arr, st1.str);
    std::strcat(temp_arr, st2.str);
    delete [] temp_arr;
    return String(temp_arr);

}

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

// Simple String output

ostream & operator <<(ostream &os ,const String &st)
{
    os << st.str;
    return os;
}

// quick and Dirty String input
istream & operator>>(istream &is , String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    // Clear the input cache.
    while (is && is.get() != '\n')
        continue;
    return is;
}
