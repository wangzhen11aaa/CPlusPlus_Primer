//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <cstring>

int main(void)
{
    using namespace std;

    char fn_array[20];
    cout << "Enter your first name :";
    cin.getline(fn_array, 20); // no more than 19 characters


    cout << "Enter your last name :";
    char ln_array[20];
    cin.getline(ln_array, 20);


    char full_array[50];
    strcpy(full_array, ln_array);

    strcat(full_array, ", ");
    strcat(full_array, fn_array);

    cout << "Here's the information in a single string: " << full_array << endl;
    return 0;


}
