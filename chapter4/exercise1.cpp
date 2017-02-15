//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    cout << "What is your first name?";
    string first_name;
    getline(cin, first_name);

    cout << "What is your last name ?";
    string last_name;
    getline(cin,  last_name);

    cout << "What letter grade do you deserve ?";
    char grade;
    cin >> grade;
    char out_grade = grade + 1;
    //cin.clear();

    int age;
    cout << "What is your age ?";
    cin >>  age;

    cout << "Name: " << first_name << ", " << last_name << endl;
    cout << "Grade :" << out_grade << endl;
    cout << "Age :" << age << endl;

    return 0;
}