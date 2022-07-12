#include<iostream>

int main()
{
	int n, l;
	std::cin >> n;
	l = n % 10;
	n /= 100;
	n = 10 * n + l;
	std::cout<<n;
}

