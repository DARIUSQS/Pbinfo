#include<iostream> 
#include<algorithm> 
int main()
{
    int n;

    std::cin >> n;

    int* nums = new int[n];

    for(int i = 0; i<n;i++)
    {
      std::cin >> nums[i];    
    }

    std::sort(nums, nums + n);
    
    std::cout<<nums[2] << " " << nums[1] << " " << nums[0];
}