
#include<iostream>

int main()
{
    int x,MAX = -2147483648;
    std::cin >> x;
    int* X = new int[x];
    for (int i = 0; i < x; i++)
    {
        std::cin >> X[i];

        if(X[i] > MAX)
        MAX = X[i];
    }
    std::cout<<MAX;
}