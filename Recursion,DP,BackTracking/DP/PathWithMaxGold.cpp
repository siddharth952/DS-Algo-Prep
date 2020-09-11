#include<iostream>
#include<vector>
using namespace std;

/*
Mistakes : 1> for the loops if we are starting from end we would start from n-1 and m-1 resp.
*/



int main(){
    int n,m; cin>>n>>m;
    vector<vector<int> > arr( n , vector<int> (m, 0));  

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){int element;cin>>element;arr[i][j] = element;}}
    
    int dp[n][m];
    
    for(int j=m;j>=0;j--){
        
        for(int i=0;i<n;i++){
            
            if(j == m) dp[i][j] = arr[i][j];
            
            //Celing case
            else if(i == 0) dp[i][j] = max(dp[i][j+1],dp[i+1][j+1]) + arr[i][j];
            
            else if(i == n) dp[i][j] = max(dp[i][j+1],dp[i-1][j+1]) + arr[i][j]; 
            //For mid
            else{
             dp[i][j] = max(max(dp[i][j+1],dp[i+1][j+1]) ,dp[i-1][j+1] ) + arr[i][j];   
            }
            
        }
    }
    // Choose the max from first column j = 0 i = 0 to N
    int maxGold=dp[0][0];
    
    for(int i=1;i<n;i++){
        if(dp[i][0] > maxGold) maxGold = dp[i][0];
    }

    cout<< maxGold;
    
    return 0;
}