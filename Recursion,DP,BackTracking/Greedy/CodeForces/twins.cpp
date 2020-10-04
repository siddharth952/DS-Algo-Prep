#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int noOfCoins;cin>>noOfCoins;
    int sum = 0;
    vector<int> coins(noOfCoins);
    for (int i = 0; i < noOfCoins; i++){
        cin>>coins[i];
        sum += coins[i];
    }
        
    
    //Sort it take the req no of coins whic is strictly greater than sum of rest
    sort(coins.begin(),coins.end(),greater<int>());
    // 8,7, 5,3
    int sumA = 0;
    
    for (int i = 0; i < noOfCoins; i++)
    {
        sumA += coins[i];
        if(sumA  > (sum - sumA)){
            cout<<i+1; // As we need min we break
            break;
        }    
    }
    return 0;
}