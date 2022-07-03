// Cerinţa
// De-a lungul principalei străzi din orașul nostru există n plopi, pentru fiecare cunoscându-se înălțimea. Primarul orașului dorește să știe care este diferența de înălțime maximă între doi plopi învecinați, și câte perechi de plopi învecinați au această diferență de înălțime.

// Ajutați-l pe primar să afle răspunsul la întrebare.

// Date de intrare
// Programul citește de la tastatură numărul de plopi n, iar apoi n numere naturale nenule, separate prin spaţii, reprezentând înălțimile plopilor.

// Date de ieşire
// Programul afișează pe ecran numerele D și nrp, separate prin exact un spațiu, reprezentând diferența de înălțime maximă între doi plopi învecinați, și câte perechi de plopi învecinați au această diferență de înălțime.

// Restricţii şi precizări
// 2 ≤ n ≤ 1000
// înălțimile plopilor vor fi mai mici decât 5000

// Exemplu

// Date de intrare
// 7
// 5 3 7 4 6 2 6

// Date de ieșire
// 4 3

// Explicație
// S-au citit înălțimile a 7 plopi. Diferența maximă de înălțime este 4, și sunt 3 perechi de plopi învecinați care au această diferență de înălțime, și anume cei cu înălțimile 3 7, 6 2 și 2 6.


#include<iostream>

int main()
{
    int n, dmax = -2000000000, count;
    // int nums[7] = {5,3,7,4,6,2,6};
    std::cin >> n;
    int* nums = new int[n];
    for(int i = 0; i < n; i ++)
    {
        std::cin >> nums[i];
    }
    
    for(int i = 0; i < n ; i++)
    {
        if(i != n- 1)
        {
        if(abs(nums[i] - nums[i+1]) > dmax)
        {
        dmax = abs(nums[i] - nums[i+1]);
        count = 1;
        }
        else if(abs(nums[i] - nums[i+1]) == dmax)
        {
        count++;
        }
        }
    }
    std::cout<< dmax << " " << count;
};