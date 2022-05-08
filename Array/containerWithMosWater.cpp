#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{

    public:
    int solve(vector<int>& nums)
    {
    int water = 0;
    int i = 0, j = nums.size() - 1;
    while (i < j) {
        int h = min(nums[i], nums[j]);
        water = max(water, (j - i) * h);
        while (nums[i] <= h && i < j) i++;
        while (nums[j] <= h && i < j) j--;
    }
    return water;
    }

};

int main()
{
    Solution s;
    vector<int> v {1,1,1};
    cout<<s.solve(v);
    return 0;
}