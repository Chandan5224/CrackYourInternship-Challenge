#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums {2,4,2,7,9};
    int target =9;
    // 1st Approach
    for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target){
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
        }
    // 2nd and best approach
    unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            int tmp = target - nums[i];
            if(map.count(tmp)){
                cout<<map[tmp]<<" "<<i;
                break;
            }
            map[nums[i]] = i;
        }
    return 0;
}