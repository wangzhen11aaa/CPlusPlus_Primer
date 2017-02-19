//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>

float hm(float x, float y); // hm is abbreviated for harmonic mean

int main(void)
{
    std::cout << "Enter two numbers :\n";
    float m_x, m_y;
    std::cin >> m_x >> m_y;
    while (m_x != 0 && m_y != 0)
    {
        std::cout << "Harmonic mean is " << hm(m_x, m_y) << std::endl;
        std::cin >> m_x >> m_y;
    }
    return 0;
}

float hm(float x, float y)
{
    return 2.0 * x * y / (x + y);
}