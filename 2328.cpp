#include<iostream>
#include<fstream>

int prim(int n)
{
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3 ; i * i <= n ; i += 2) if(n % i == 0) return 0;
    return 1;
}
int nrdiv(int n)
{
    int d = 2 , prod = 1;
    while(n > 1)
    {
        int p = 0; 
        while(n % d == 0) 
        {
            n /= d; 
            p++;
        }
        if(p) prod = prod * (p+1);
        d++;
        if(d * d > n) d = n;
    }
    return prod;
}
int main()
{
    std::fstream si("prim013.in", std::ios::in);
    std::fstream so("prim013.out", std::ios::out);


    int n, num, divprim = 0;
    si >> n;
    for(int i = 0; i < n; i++)
    {
       si>> num;
       if(num != 1 && prim(nrdiv(num)))
       divprim++;
     }
     so << divprim;
 }