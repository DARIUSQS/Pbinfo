

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