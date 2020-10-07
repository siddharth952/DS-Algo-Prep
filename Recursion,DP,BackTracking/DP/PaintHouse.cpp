#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    long arr[n][3];
    for(int i = 0; i < n ; i++){
        for(int j=0;j<3;j++)
        cin>> arr[i][j];
    }
    
    // DP
    vector<vector<long long> > dp(n,vector<long long> (3,0) );  // N+1 ?????????
    
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];
    
    
    for(int i = 1; i< n; i++){
        //For each house ie i
        dp[i][0] = arr[i][0] + min(dp[i-1][1], dp[i-1][2] );
        dp[i][1] = arr[i][1] + min(dp[i-1][0], dp[i-1][2] );
        dp[i][2] = arr[i][2] + min(dp[i-1][0], dp[i-1][1] );
    }
    
    cout<< min(dp[n-1][0], min(dp[n-1][1],dp[n-1][2]));
    
 return 0;   
}
/*

Min cost to paint house with no adj house with the same color 
    //DP
    
    If we select color C for house i then cost of house 2 cannot be C so we select min from dp for the other two
    
    R G B 
   -                House 0
   -                House 1
   -                House 2
   -                House 3

4
1 5 7
5 8 4
3 2 9
1 2 4
*/