#include<iostream> 
#include<fstream>
#include<vector>
#include<algorithm>


std::fstream si("divizori1.in", std::ios::in);
std::fstream so("divizori1.out", std::ios::out);


int main()
{
    int N,Q;
    //si >> N >> Q;
    si >> N >> Q;
    std::vector<int> X(N);
    for(int i = 0; i < N; i++)
    {                   
        si >> X[i];           
    }                                   
    std::sort(X.begin(), X.end());        
    for (int i = 0; i < Q; i++) {         
        int r, nrdiv = 0;             
        si >> r;                      
        for(int i : X)                      
        {                              
            if(r >= i)
            {   
                if(r % i == 0)
                nrdiv++;
            }   
            else
            {   
                break;
            }   

        }   
        so << nrdiv << std::endl;
    }   
}
