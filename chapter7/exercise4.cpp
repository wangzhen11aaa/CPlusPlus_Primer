//
// Created by wangzhen on 19/02/2017.
//

#include <iostream>

long double probability(int fd_num, int fd_pk, int sd_num, int sd_pk);

int main(void)
{
    std::cout << "Enter field numbers, picks in field numbers, numbers and pickups in second range \n";
    unsigned int m_fd_num, m_fd_pk, m_sd_num, m_sd_pk;
    while (std::cin >> m_fd_num >> m_fd_pk >> m_sd_num >> m_sd_pk && m_fd_pk <= m_fd_num && m_sd_pk <= m_fd_num)
    {
        std::cout << "You have one chance in " << probability(m_fd_num, m_fd_pk, m_sd_num, m_sd_pk) << " of winning. \n";
    }
    std::cout << "bye \n";
}

long double probability(int fd_num, int fd_pk , int sr_num, int sr_pk)
{
    double probability = 1.0;
    for (; fd_pk > 0; --fd_num, --fd_pk)
        probability *=  fd_num / fd_pk;
    for (; sr_pk > 0; --sr_num, --sr_pk)
        probability *= sr_num / sr_pk;
    return probability;
}