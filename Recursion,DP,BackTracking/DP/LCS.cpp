#include <bits/stdc++.h>
using namespace std;
int main(){
    string x,y;cin>>x;cin>>y;
    
    vector<vector<int>> dp(x.size()+1,vector<int>(y.size()+1,0));
    
    for(int i = 1;i<dp.size();i++){
        for(int j = 1;j<dp[0].size();j++){
            if(x[i] == y[j] ) dp[i][j] = 1+ dp[i-1][j-1];
            else{
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    cout<<dp[x.size()][y.size()];
    return 0;
}