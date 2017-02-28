//
// Created by wangzhen on 28/02/2017.
//

#include <iostream>
#include "classic2.h"

void Bravo(const Cd &disk);
int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Pinao Sonata in B flat, Fantasia in C",
                         "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;

    cout << "Using object directly : \n";
    c1.Report();
    c2.Report();

    cout << "Using type cd* pointer to objects : \n";
    pcd->Report(); // use Cd method for cd object
    pcd = &c2;
    pcd->Report(); // use Classic method for classic object

    cout << "Calling a function with a Cd reference argument :\n";
    Bravo(c1);
    cout << "For Classic class :\n";
    Bravo(c2);

    Classic copy;
    copy = c2;
    copy.Report();
    return 0;
}

void Bravo(const Cd &disk)
{
    disk.Report();
}
