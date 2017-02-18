//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void show_menu();

int main(void)
{
    show_menu();
    char ch;
    cin >> ch;
    while(ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
    {
        cout << "Please enter a c, p, t, or g: ";
        cin >> ch;
    }
    switch (ch)
    {
        case 'c': cout << "Venus flytrap is a well known carnivorous plant \n";
            break;
        case 'p' : cout << "Ludwig van Beethoven is a great pianist \n";
            break;
        case 't': cout << "A maple is a tree \n";
            break;
        case 'g': cout << "Go is a game \n";
            break;
    }
    return 0;

}

void show_menu(void)
{
    cout << "Please enter one of the following choices \n";
    cout << "c) carnivore \t\t" <<  "p) pianist \n";
    cout << "t) tree      \t\t" <<  "g) game    \n";
}

