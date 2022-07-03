#include <iostream>
#include <fstream>

std::fstream fin("aparitiicifra.in",std::ios::in);
std::fstream fout("aparitiicifra.out",std::ios::out);

int main()
{
    int Mnum = 15, sNum = 4, index = Mnum, Mnum1 = Mnum, count = 0;
    fin >> Mnum >> sNum;
    while(index>=0)
    {
        Mnum1 = Mnum - index; 
        while(Mnum1 != 0)
        {
            int temp = 0;
            temp = Mnum1 % 10;
            if(temp  == sNum)
                count++;
            Mnum1 = Mnum1 / 10;
        }
        index--;
    }
    fout << count;
}