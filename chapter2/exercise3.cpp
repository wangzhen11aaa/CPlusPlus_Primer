#include <iostream>

using namespace std;

void three_mice(void)
{
    cout << "Three blind mice \n";
}

void see_run(void)
{
    cout << "See how they run \n";
}

int main(void)
{
    three_mice();
    three_mice();
    see_run();
    see_run();

    return 0;
}
