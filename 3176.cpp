#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    std::fstream si("fibo0.in", std::ios::in);
    std::fstream so("fibo0.out", std::ios::out);

    int a,b,r;

    std::string line;
    while(getline(si,line))
    {
        if(b % a ==0)
        r++;
    }
    so << r;

}