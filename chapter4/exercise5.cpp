//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <string>
#include <array>


using namespace std;
//struct CandyBar
//{
//    //array<char, 30> name;
//    char name[30];
//    float weight;
//    int num_calories;
//};
struct CandyBar
{
    //array<char, 30> name; // wrong usage
    string name;
    float weight;
    int num_calories;
};
int main(void)
{

    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "snack name :" << snack.name << ", " << "snack weight :" << snack.weight << " ," << "calories :" << snack.num_calories << endl;
    return 0;

}