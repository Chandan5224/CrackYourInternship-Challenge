#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums{0,2,4,1,5,0};
    stack<int> temp;
        int i;
        for(i=nums.size()-1;i>=0;i--){
            if(nums[i]!=0)
            {
                temp.push(nums[i]);
                cout<<temp.top()<<" ";
            }
        }
        int y=temp.size();
        int g=nums.size();
        for(i=0;i<y;i++)
        {
            int x=temp.top();
            nums[i]=x;
            cout<<"x "<<x<<" nums "<<nums[i]<<endl;
            // auto itPos = nums.begin() + i;
            // nums.insert(itPos,x);
            temp.pop();
        }
        for(i=y;i<g;i++){
            nums[i]=0;
            // auto itPos = nums.begin() + i;
            // nums.insert(itPos,0);
        }
        for ( i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }
        
    return 0;
}
  
  
        