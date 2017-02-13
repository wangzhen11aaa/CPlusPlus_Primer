// Convert integer inches into integer feet.

#include <iostream>

int main(void)
{
    using namespace std;
    const unsigned int kfoot_convert_inch =12;
    cout << "Input your height in integer inches \n";
    int height;
    cin >> height;
    cout <<  "_______________________\n" << height/kfoot_convert_inch << endl;
    return 0;

}