#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;

class Solution{

    public:
    bool match(char a,char b)
    {
        if(a=='{' && b=='}'){
            return true;
        }
        if(a=='(' && b==')'){
            return true;
        }
        if(a=='[' && b==']'){
            return true;
        }
        return false;  
    }
    bool solve(string s)
    {
        stack<char> c;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                c.push(s[i]);
            else if (s[i]==')'||s[i]=='}'||s[i]==']')
            {
                if(c.empty())
                    return false;
                
                if(!match(c.top(), s[i]))
                    return false;  
                c.pop();
            } 
        }
        if(c.empty())
            return true;
        else
            return false;
    }

};

int main()
{
    Solution s;
    string v="({)}";
    if(s.solve(v))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}