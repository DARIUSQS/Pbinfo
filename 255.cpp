#include<iostream>

int main()   
{
	int x;
    std::cin >> x;
    int nums[41];
	if(x != 1)
	{
    nums[0] = 1; nums[1] = 1;
    std::cout << nums[0]<<" "<< nums[1] << " ";
    for(int i = 2; i < x; i++)
    {
    	nums[i] = nums [i-1] + nums[i - 2];
    	std::cout<<nums[i] << " ";
    }
	}
	else
	{
		std::cout << 1;
	}

    
    
}
