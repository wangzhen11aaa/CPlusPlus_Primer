//
// Created by wangzhen on 23/02/2017.
//

#include <iostream>
#include <cctype>
#include "stack.h"

int main(void)
{
    using namespace std;
    Stack st; //create an empty stack;
    char ch;

    cout << "Please enter A to add a purchase order, \n"
        << "P to process to PO, or Q to quit. \n";
    customer c;
    while (cin >> ch && toupper(ch) != 'Q')
    {
        cout << "input is " << ch << endl;
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)){
            cout << "\a";
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':
                cout << "Enter a consumer name : \n";
                cin.getline(c.fullname, 35);
                cout << "Enter a PO number to add :\n";
                c.fullname[0] = ch;
                cin >> c.payment;
                if (st.isfull())
                    cout << "Stack already full \n";
                else
                    st.push(c);
                break;
            case 'P':
            case 'p':
                if (st.isempty())
                    cout << "stack already empty \n";
                else
                {
                    st.pop(c);
                    cout << "PO name" << c.fullname << " poped \n";
                    cout << "PO #" << c.payment << " popped \n";
                }
                break;
        }
    }
    cout << "Bye \n";
    return 0;
}
