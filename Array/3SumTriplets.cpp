#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution
{

public:
    vector<vector<int>> solve(vector<int> &nums)
    {
        vector<vector<int>> vec;
        map<int, int> map;
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        //cout<<l<<" "<<r<<endl;
        for (auto i : nums)
        {
            map[i]++;
        }
        while (l+2 <= r)
        {
            int value = nums[l] + nums[r];

            if(map.count(-value)>0&&map[-value]>0)
            {  
                map[-value]--;
                if(map[-value]!=0&&nums[l]!=(-value)||map[-value]!=0&&nums[r]!=(-value)||nums[r]!=(-value)||nums[l]!=(-value))
                {
                    vector<int> v;
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    v.push_back(-value);
                    vec.push_back(v);
                    map[nums[l]]--;
                    map[nums[r]]--;
                }
                if(map[-value]>0)
                {
                    vector<int> v;
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    v.push_back(-value);
                    vec.push_back(v);
                    map[nums[l]]--;
                    map[nums[r]]--;
                }
            }
            if (value < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        //    cout<<l<<" "<<r<<endl;
        }
        return vec;
    }
};

int main()
{
    Solution s;
    vector<int> v {-2,0,0,2,2};
    vector<vector<int>> v1;
    v1.push_back(v);
    vector<vector<int>> v2=s.solve(v);
    cout<<"Answer "<<endl;
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v2[i].size(); j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}