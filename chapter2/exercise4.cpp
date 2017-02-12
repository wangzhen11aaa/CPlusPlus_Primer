#include <iostream>

using namespace std;

int main()
{
    cout << "How old are you ?";
    int age;
    cin >> age;
    cout << "Your age in months is" << age * 12  + 2<< endl; // This month is February.
    return 0;
}
