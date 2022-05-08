#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{

    public:
    vector<int> solve(vector<int>& nums)
    {
        map<int,int> map;
        vector<int> v;
        for(auto a : nums)
        {
            map[a]++;
        }
        for(auto a : map)
        {
            if(a.second>1)
                v.push_back(a.first);
        }
        return v;
    }

};

int main()
{
    Solution s;
    vector<int> v {1,2,1,3,5,3};
    vector<int> v2;
    v2=s.solve(v);
    for(auto a:v2)
    {
        cout<<a<<" ";
    }
    return 0;
}