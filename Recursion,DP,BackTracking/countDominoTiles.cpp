#include<iostream>
#include<string>
int countVariationsofDomino(int N){
    // 3 X N Matrix 
    int dp[N+1];
    dp[0] = 0;
    dp[2] = 3;
    dp[4] = 11;

    for(int i = 5;i<=N;i++){
        if (i % 2 == 0){
                dp[i] = dp[i-2] * dp[2];
        }
        else if(i % 4 == 0){
                dp[i] = dp[i-4] * dp[4];
        }
        else
        {
            dp[i] = 0; 
        }
        
    } 
    return dp[N];
}
using namespace std;
int main(){
    int N;cin>>N;
    cout<<countVariationsofDomino(N);
    return 0;
}