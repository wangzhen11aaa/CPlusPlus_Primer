//
// Created by wangzhen on 20/02/2017.
//

#include <iostream>

void print(const char * str, int count = 1);

int main(void)
{

    const int ki = 4;
    print("Hello, World");
    for (int j = 0; j < ki; ++j)
        print("Hello, World", j);
    return 0;
}

void print(const char * pc, int count)
{
    for (int i = 0; i < count; ++i)
        std::cout << pc << std::endl;
}