#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{

    public:
    void solve(string& nums)
    {
        map<char,int> map;
        string ans;
        for(int i=0;i<nums.length();i++)
        {
            map[nums[i]]++;
        }
        for(auto i :map)
        {
            if(i.second>1)
                cout<<i.first<<" count : "<<i.second<<endl;
        }
    }

};

int main()
{
    Solution s;
    string v ="LoL You";
    s.solve(v);
    return 0;
}