#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    
    
    vector<int> dp(n+1,0);
    dp[1] = 1;
    dp[2] = 2;
    
    //Need total no of ways
    for(int i = 3;i<=dp.size();i++)
        dp[i] = (dp[i-1] + dp[i-2]);
    
    
    cout << dp[n];
    
    return 0;
}