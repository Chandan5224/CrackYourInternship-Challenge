#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution{

    public:
    
    int solve(string h, string n) 
    {
        int j=0,c=0;
        if(n.length()==0)
            return 0;
        if(n.length()>h.length())
            return -1;
        for (int i = 0; i <= h.length()-n.length(); i++)
        {
            c=0;
            if(h[i]==n[j])
            {
                for (int k = 1; k < n.length(); k++)
                {
                    if(h[i+k]!=n[k]){
                        c=1;
                        break;
                    }
                }
                if(c==0)
                    return i;
                
            }
        }
        return -1;  
    }

};

int main()
{
    Solution s;
    string h="Cdndan";
    string n="dan";
    cout<<s.solve(h,n);
    return 0;
}