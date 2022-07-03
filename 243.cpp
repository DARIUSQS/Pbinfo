// Cerinţa
// Se consideră şirul 1, 2,1, 3,2,1, 4,3,2,1, ..., în care prima grupă este formată din numărul 1, a doua grupă este formată din numerele 2,1, …, a k-a grupă este formată din numerele k,k-1,...,2,1.

// Pentru un număr natural dat n, să se determine al n-lea termen din şir.

// Date de intrare
// Programul citeşte de la tastatură numărul n

// Date de ieşire
// Programul va afişa pe ecran numărul x, reprezentând al n-lea termen din şir.

// Restricţii şi precizări
// 1 ≤ n ≤ 1.000.000.000

// Exemplu

// Date de intrare
// 14

// Date de ieşire
// 2

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