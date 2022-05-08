#include<iostream>
#include<vector>
using namespace std;

//maximum sub array

int main()
{
    vector<int> prices {7,6,4,3,1};
    if(prices.size() == 0) 
        return 0;
        
        int ans = 0;
        int start = prices[0], end = prices[0];
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < start){
                //restart as session
                ans = max(ans, end - start);
                start = prices[i];
                end = prices[i];
            }else{
                //continue current session
                end = max(end, prices[i]);
            }
        }
        cout<<end<<" "<<start<<endl;
        ans = max(ans, end - start);
        cout<<ans;
    return 0;
}