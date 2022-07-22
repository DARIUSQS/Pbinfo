#include<iostream>
#include<fstream>
#include<string>

int main()
{
    std::fstream si("fibo0.in", std::ios::in);
    std::fstream so("fibo0.out", std::ios::out);

    int a = 0,b = 0,r = 0;

    std::string line;
    while(si >> a >> b)
    {
        if(b % a == 0)
        r++;
    }
    so << r;

}