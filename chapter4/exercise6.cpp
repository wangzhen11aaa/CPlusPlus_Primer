//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <string>

struct CandyBar
{
    //array<char, 30> name; // wrong usage
    std::string name;
    float weight;
    int num_calories;
};
int main(void)
{
    using namespace std;
    CandyBar * pc = new CandyBar[3];

    cout << "Initialize snack by the order: name, weight, num_calories \n";
    cin >> pc->name >> pc->weight >> pc->num_calories;
    cin >> (pc + 1)->name >> (pc + 1)->weight >> (pc + 1)->num_calories;
    cin >> (pc + 2)->name >> (pc + 2)->weight >> (pc + 2)->num_calories;

    cout << (pc + 0)->name << ", " << (pc + 0)->weight <<", " << (pc + 0)->num_calories << endl;
    cout << (pc + 1)->name << ", " << (pc + 1)->weight <<", " << (pc + 1)->num_calories << endl;
    cout << (pc + 2)->name << ", " << (pc + 2)->weight <<", " << (pc + 2)->num_calories << endl;

    CandyBar snack[3] = {{"abc d", 1.2, 300}, {"ab cd", 2.4, 400}, {"abcd", 0, 0}};
    cout << snack->name << ", " << (snack + 1)->name << ", " << (snack + 2)->name << endl;
    delete [] pc;


    return 0;

}
