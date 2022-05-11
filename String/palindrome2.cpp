#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution{

    public:
    bool solve(string& s)
    {
        int l=0,r=s.length()-1,count=0;
        while(l<r)
        {
            if(s[l]!=s[r]){
                l++;
                if(count==1)
                    return false;
                else
                    count=1;
            }else{
                l++;
                r--;
            }
        }
        // if(count==1&&s.length()==3)
        //     return false;
        // else if(count<=1)
        //     return true;
        // else
        //     return false;
        return true;
        
    }

};

int main()
{
    Solution s;
    string v="eedede";
    if(s.solve(v))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}