#include<iostream>

int main()
{
	int num; 
	std::cin >> num;
	int  n[10];
	int f[50];
	f[0] = 1; f[1] = 1;
	for(int i = 2; i < 46; i++) 
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	for (int i = 0; i < num; i++) {
		std::cin >> n[i];
	}
	for (int i = 0; i < num; i++) {
		int r = 0;
		for (int j = 0; j< 45; j++) {
			if( n[i] == f[j]) r++;
		}
		if(r) std::cout<<"DA"<<std::endl;
		else std::cout<<"NU"<<std::endl;
	}
}
