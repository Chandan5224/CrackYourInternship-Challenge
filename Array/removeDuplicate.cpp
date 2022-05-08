#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums{-1,0,0,1,4,6,7};
    int j = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[j++] = nums[i + 1];
            }
        }
    
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}