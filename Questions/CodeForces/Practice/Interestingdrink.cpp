//Time: 25 Mins Error in Execution
#include<iostream>
#include<vector>
using namespace std;

void solve(){

    long n;cin>>n;
    vector<long> priceInShops(n);
    
    for (long i = 0; i < n; i++)
        cin>> priceInShops[i];
    
    long noOfDays;cin>>noOfDays;

    vector<long> coinsSpent(noOfDays);
    for (long i = 0; i < noOfDays; i++)
        cin>> coinsSpent[i];
    

    //Want to know for each day ways he could get his drink considering the coins
    // he has for that day

    vector<vector<long>> dp(noOfDays+1,vector<long>(n+1,0));

    for (long i = 1; i < dp.size(); i++)
        for (long j = 1; j < dp[0].size(); j++)
            if(coinsSpent[i-1] >= priceInShops[j-1])
                dp[i][j] = dp[i][j-1] + 1;
            else{
                dp[i][j] = dp[i][j-1];
            }
     for (long i = 1; i < dp.size(); i++)
        cout<<dp[i][n]<<"\n";  
}

int main() {
    int T = 1;
    while(T--)
    solve();
    return 0;
}