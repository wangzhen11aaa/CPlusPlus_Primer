//
// Created by wangzhen on 15/02/2017.
//

#include <iostream>
#include <string>

struct Pizza
{
    std::string name;
    float diameter;
    float weight;
};

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    Pizza * ppizza =  new Pizza;
    cout << "Enter the company name of pizza \n";
    getline(cin, ppizza->name);

    cout << "Enter the diameter of pizza \n";
    cin >> ppizza->diameter;

    cout << "Enter the weight of pizza \n";
    cin >> ppizza->weight;

    cout << "Your input is : \n";
    cout << "pizza's compay name :" << ppizza->name << endl;
    cout << "pizza's diameter :" << ppizza->diameter << endl;
    cout << "pizza's weight :" << ppizza->weight << endl;

    return 0;
}

