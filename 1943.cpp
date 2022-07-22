#include<iostream>
#include<fstream>

std::fstream is("bacterie.in", std::ios::in);
std::fstream os("bacterie.out", std::ios::out);
 
int main()
{
    unsigned long long  n,m,min,gausssum,remaining;
    is >> n >> m;
    n < m ? min = n : min = m;
    gausssum = min * (min + 1) / 2;
    remaining = m * n -gausssum;
    os << remaining;
}