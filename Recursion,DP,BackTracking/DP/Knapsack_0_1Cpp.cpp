#include<bits/stdc++.h>
using namespace std;
#define FI for(int i = 0;i<n;i++)
int main(){
    
    int n;cin>>n;
    int vals[n],wts[n];
    FI{
        cin>>vals[i];
    }
    FI{
        cin>>wts[i];
    }
    
    int cap;cin>>cap;
    
    vector<vector<int>> dp(n+1,vector<int>(cap+1,0));
    
    for(int i = 1;i<n+1;i++){ // Forgot to loop till n+1
        for(int j=1;j<cap+1;j++){ // Forgot to loop till cap+1
            if( j >= wts[i - 1]){
                int rCap = j - wts[i-1];
                if(dp[i-1][rCap] + vals[i-1] > dp[i-1][j] ){
                    dp[i][j] = dp[i-1][rCap] + vals[i-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
                    
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][cap];
    
}