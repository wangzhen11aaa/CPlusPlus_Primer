//
// Created by wangzhen on 01/03/2017.
//

#include "worker.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//Worker methods
Worker::~Worker() {}

// protected methods
void Worker::Data() const
{
    cout << "Name :" << fullname << endl;
    cout << "Employee ID :" << id << endl;
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "Enter worker's ID ";
    cin >> id;
    while(cin.get() != '\n')
        continue;
}

//Waiter methods
void Waiter::Set()
{
    cout << "Enter waiter's name : ";
    Worker::Set();
    Get();
}

//protected methods
void Waiter::Data() const
{
    cout << "Panache rating :" << panache << endl;

}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating :";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

//Singer Methods
char *Singer::pv[Singer::Vtype] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    cout << "Enter singer's name :";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get()
{
    cout << "Enter singer's vocal range:\n";
    int i;
    for (i = 0; i < Vtypes; i++) {
        cout << i << ": " << pv[i] << " ";
        if ( i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << '\n';
    cin >> voice;
    while (cin.get() != '\n')
        continue;
}

//SingingWaiter methods

void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Set()
{
    cout << "Enter singing waiter's name : ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const
{
    cout << "Category : Singging Waiter \n";
    Worker::Data();
    Data();
}


