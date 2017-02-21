//
// Created by wangzhen on 21/02/2017.
//

#include <iostream>
#include <new>
#include <cstring>

struct chaff
{
    char dross[20];
    int slag;
};

char buff[sizeof(chaff) * 2];

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    char *pstr = new(buffer) chaff[2];

    int i = 0;
    char dross[20] = {0};
    cout << "Enter dross name";

    cin.getline(dross, 20);
    while (!dross[0])
    {
        cout << "Enter dross name";
        cin.getline(dross, 20);
    }

    strcpy(pstr[i].dross, dross);

    while ((!cin >> pstr[i].slag))
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Renter the number \n";
    }
    dross[0] = '\0';
    cin.getline(dross, 20);
    while (!dross[0])
    {
        cout << "Enter dross name";
        cin.getline(dross, 20);
    }

    strcpy(pstr[++i].dross, dross);

    while ((!cin >> pstr[i].slag))
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Renter the number \n";
    }

    for (int j = 0; j < i + 1; j++)
    {
        cout << "Dross for element " << j + 1 << ": "
        << pstr[j].dross << endl;
        cout << "Slag value: " << pstr[j].slag << endl;
    }

    delete [] pstr;
    return 0;

}
