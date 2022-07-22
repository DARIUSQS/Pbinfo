#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int fib[45];
    fib[0] = 1; fib[1] = 1;
    std::cout << 1 <<" " << 1 << " ";
    for(int i = 2; i < 46; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        if(fib[i] <= x)
        std::cout << fib[i] << " ";
        else
        break;
    }
    return 0;
}