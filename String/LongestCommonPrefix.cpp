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
    string solve(vector<string>& str)
    {
      int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        cout<<str[1]<<endl;
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
                
            }
            else{
                break;
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
    cout<<S;
    return 0;
}