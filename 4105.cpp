#include<iostream>
#include<vector>
#include<map>
#include<cmath>
//Use maps 
std::map<int, int> map;

int main()
{
    int n = 0;
    std::cin >> n;
    int* nums = new int[n];
    int nd;
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
        nd = 0;
        for (int d = 1; d * d <= nums[i]; d++)
        {
            if (nums[i] % d == 0)
            {
                nd++;
                if (d * d != nums[i]) nd++;
            }
        }
        map[i] = nd;
    }
    int sameDiv = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (map[i] == map[j])
                sameDiv++;
        }
    }
    std::cout<<sameDiv;
}
