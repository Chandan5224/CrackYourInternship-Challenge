#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //1st Approach
        // vector<int> count(k);
        // count[0] = 1;
        // int prefix = 0, res = 0;
        // for (int a : nums) {
        //     prefix = (prefix + a % k + k) % k;
        //     res += count[prefix]++;
        // }
        // return res;

        //2nd Approach
        map<int, int> map;
        map.insert({0,1});
        int sum=0;
        int rem=0;
        int ans=0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)
                rem+=k;

            if(map.count(rem))
            {
                ans+=map[rem];
                map[rem]++;
            }else{
                map[rem]++;
            }
        }
        return ans;
        
    }
};  

int main()
{
    vector<int> v {4,5,0,-2,-3,1};
    int k=5;
    Solution s;
    cout<<s.subarraysDivByK(v,k);

}