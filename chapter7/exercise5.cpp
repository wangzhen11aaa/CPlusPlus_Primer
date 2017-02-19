//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>

long long factorial(long long n);


int main(void)
{
    std::cout << "Enter factorial number \n";
    int n;
    while(std::cin >> n && n > 0)
        std::cout << n << "! = " << factorial(n) << std::endl;


    if (n < 0)
        std::cout << "Input must be positive \n";
    return 0;
}

long long factorial(long long n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
