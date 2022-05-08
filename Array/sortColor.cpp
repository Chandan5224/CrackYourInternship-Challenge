#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> nums{1,2,0,1,2,0};
    int arr[3]={0,0,0};
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
       cout<<arr[0]<<arr[1]<<arr[2]<<endl;
        for(int j=0;j<arr[0];j++)
            nums[j]=0;
        
        for(int j=arr[0];j<arr[1]+arr[0];j++)
            nums[j]=1;

        for(int j=arr[1]+arr[0];j<arr[2]+arr[1]+arr[0];j++)
            nums[j]=2;
   
        for (int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }
        
    return 0;
}