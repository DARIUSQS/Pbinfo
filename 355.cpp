
#include<iostream>

int main()
{
    int x, MIN = 2000000000;
    std::cin >> x;
    int* X = new int[x];
    for (int i = 0; i < x; i++)
    {
        std::cin >> X[i];

        if(X[i] < MIN)
        MIN = X[i];
    }
    std::cout<<MIN;
}