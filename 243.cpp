#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
/// y = n-lea nr
/// y = x(x+1)/2
/// 2y = x^2 + 4
/// 4^2 + 4 - 2y = 0
/// x1 = -1 + sqrt(1^2 + 4 * 2y) / 2
int main()
{
	int y , lastnum, difference, actualnum;
	std::cin >> y;
	double x;
	x = ((-1) + sqrt(1 + 4 * 2 * y)) / 2;
	int x1 = x;
	lastnum = x1 * (x1 + 1) / 2;
	difference = y - lastnum;
	actualnum = 1 + (x1 + 1) - difference;
	if (x1 - x == 0)
		std::cout<< 1;
	else if (y > 1000000000)
	{
		std::cout<< 1;
	}
	else
	{
		std::cout<< actualnum;
	}
}
