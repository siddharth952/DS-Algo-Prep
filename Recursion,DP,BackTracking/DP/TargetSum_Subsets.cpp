#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;cin>>target;
    
    vector< vector<bool>> dp(n+1,vector<bool>(target+1,false));

    //problem with range eg n+1 and target+1
    // for(int i = 0;i<n+1;i++){
    //     for(int j=0;j<target+1;j++){
    for(int i = 0;i<dp.size();i++){
        for(int j=0;j<dp[0].size();j++){      
                 
            if(i == 0 and j==0){
                dp[i][j] = true; 
            }
            else if(i==0){
                dp[i][j] = false;
            }
            
            else if(j==0){
                dp[i][j] = true;
            }
            else{
                        
                if(dp[i-1][j] == true){ 
                    dp[i][j] = true;
                }else{
                    int val = arr[i-1];
                    if(j >= val){
                        if(dp[i - 1][j - val] == true)
                            dp[i][j] = true; // (we do not use or we use )
                    }
                }
             }
        }
    }
    
    cout<<(dp[n][target]?"true":"false");

    return 0;
}