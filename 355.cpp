// Cerinţa
// Se dau n numere întregi. Calculaţi cel mai mic dintre cele n numere date.

// Date de intrare
// Programul citește de la tastatură numărul n, iar apoi n numere întregi, separate prin spaţii.

// Date de ieşire
// Programul afișează pe ecran numărul MIN, reprezentând cel mai mic dintre cele n numere date.

// Restricţii şi precizări
// 1 ≤ n ≤ 1000
// cele n numere citite vor avea cel mult 9 cifre

// Exemplu

// Date de intrare
// 5
// 7 6 9 6 8

// Date de ieșire
// 6

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