// O echipă de arheologi a descoperit o hartă străveche a Ținutului de Nord, care era locuit de o civilizație condusă după reguli matematice foarte riguroase. Conform acestei hărți, Ținutul de Nord era împărțit în n rânduri a câte m comitate, fiecare comitat ocupând o suprafață pătrată de un hectar.

// Însă descoperirile au mai arătat că această civilizație a fost atacată de la sud-vest de o bacterie periculoasă, ce a acționat astfel: în primul an, a infectat comitatul din colțul din stânga jos al hărții, în al doilea an a infectat cele două comitate vecine cu primul, în al treilea an a infectat cele trei comitate vecine cu anterioarele două și așa mai departe, infecția oprindu-se când bacteria a ajuns la marginea de sus sau la marginea din dreapta a hărții.

// Primul an	
// +----+----+----+----+----+ 
// |    |    |    |    |    | 
// +----+----+----+----+----+
// |    |    |    |    |    |     
// +----+----+----+----+----+
// |    |    |    |    |    |    
// +----+----+----+----+----+
// |    |    |    |    |    |    
// +----+----+----+----+----+
// |####|    |    |    |    |    
// +----+----+----+----+----+

//Al doilea an

// +----+----+----+----+----+ 
// |    |    |    |    |    | 
// +----+----+----+----+----+
// |    |    |    |    |    |     
// +----+----+----+----+----+
// |    |    |    |    |    |    
// +----+----+----+----+----+
// |####|    |    |    |    |    
// +----+----+----+----+----+
// |####|####|    |    |    |    
// +----+----+----+----+----+

//Al treilea an

// +----+----+----+----+----+ 
// |    |    |    |    |    | 
// +----+----+----+----+----+
// |    |    |    |    |    |     
// +----+----+----+----+----+
// |####|    |    |    |    |    
// +----+----+----+----+----+
// |####|####|    |    |    |    
// +----+----+----+----+----+
// |####|####|####|    |    |    
// +----+----+----+----+----+

//Al patrulea an

// +----+----+----+----+----+ 
// |    |    |    |    |    | 
// +----+----+----+----+----+
// |####|    |    |    |    |     
// +----+----+----+----+----+
// |####|####|    |    |    |    
// +----+----+----+----+----+
// |####|####|####|    |    |    
// +----+----+----+----+----+
// |####|####|####|####|    |    
// +----+----+----+----+----+

// Cerința
// Scrieţi un program care să determine numărul de comitate rămase neinfectate după oprirea expansiunii bacteriei.

// Date de intrare
// Fișierul de intrare bacterie.in conține separate printr-un spaţiu, n și m, dimensiunile hărții.

// Date de ieșire
// Fișierul de ieșire bacterie.out va conține numărul de comitate rămase neinfectate după oprirea expansiunii bacteriei.

// Restricții și precizări
// 1 ≤ n ≤ 1.000.000.000, 1 ≤ m ≤ 1.000.000.000, numere naturale

// Exemplu

// bacterie.in
// 3 5

// bacterie.out
// 9

// Explicație
// Harta Ținutului de Nord cuprinde 3 rânduri a câte 5 comitate fiecare, având în total 15 comitate. Expansiunea bacteriei s-a oprit după 3 ani, deoarece a atins marginea de sus; au rămas 9 comitate neinfectate.


#include<iostream>
#include<fstream>

std::fstream is("bacterie.in", std::ios::in);
std::fstream os("bacterie.out", std::ios::out);

int main()
{
    unsigned long long  n,m,min,gausssum,remaining;
    is >> n >> m;
    n < m ? min = n : min = m;
    gausssum = min * (min + 1) / 2;
    remaining = m * n -gausssum;
    os << remaining;
}