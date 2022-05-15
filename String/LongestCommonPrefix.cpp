#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
#include<map>
using namespace std;
typedef long long int LL;

class Solution{

    public:
    string solve(vector<string>& nums)
    {
        string ans;
        int len=INT_MIN;
        LL index=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(len>nums[i].length()){
                len=nums[i].length();
                index=i;
            }
        }
        cout<<index;
        for (LL i = 0; i < len; i++)
        {
            if(nums[index][0]==nums[i][0])
            {

            }
        }
        
        
        return ans;
    }

};

int main()
{
    Solution s;
    vector<string> v{
        {"flower"},
        {"flow"},
        {"flight"}};
    string S=s.solve(v);

    return 0;
}