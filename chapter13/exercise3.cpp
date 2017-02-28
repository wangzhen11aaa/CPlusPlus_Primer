//
// Created by wangzhen on 28/02/2017.
//

#include <iostream>
#include "dma.h"
#include <string>

const int CLIENTS = 4;
int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    char label[100];
    char style[100];
    char color[100];
    int r;
    int choice;
    DMAABC *pdma[CLIENTS];
    for (int i = 0; i < CLIENTS; ++i)
    {
        cout << "Enter your dma type, 1:lackDMA, 2:hasDMA :";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Input color : \n";
            cin >> color; cout << "Input label : \n";
            cin >> label;
            cout << "Input rating : \n";
            cin >> r;
            pdma[i] = new lackDMA(color, label, r);
        }
        else if (choice == 2)
        {
            cout << "Input style : \n";
            cin >> style;
            cout << "Input label : \n";
            cin >> label;
            cout << "Input rating : \n";
            cin >> r;
            pdma[i] = new hasDMA(style, label, r);
        }
        else
        {
            pdma[i] = new lackDMA();
        }
    }

    for (int i = 0; i < CLIENTS; ++i)
        cout << *pdma[i];
    for (int i = 0; i < CLIENTS; ++i)
        delete pdma[i];
}