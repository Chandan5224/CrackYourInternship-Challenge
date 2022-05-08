#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix 
{{0,0,0,5},{4,3,1,4},{0,1,1,4},{1,2,1,3},{0,0,1,1}};
        int x=matrix.size();
        int y=matrix[0].size();   
        int m[x*y],n[x*y];
    int g=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    m[g]=i;
                    n[g]=j;
                    g++;
                }
            }
        }
        for (int c = 0; c < g; c++)
        {
        
        for(int i=0;i<matrix[0].size();i++)
        {
            matrix[m[c]][i]=0;
        }
        for(int i=0;i<matrix.size();i++)
        {
            matrix[i][n[c]]=0;
        }
        }
        for (size_t i = 0; i < matrix.size(); i++)
        {
            for (size_t j = 0; j < matrix[0].size(); j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        
    return 0;
}