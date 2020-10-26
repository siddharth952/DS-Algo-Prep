#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string X = "ABAAC";
    string Y = "AABABAAC";

    //DP Table
    vector<vector<int>> dp (X.size() + 1,vector<int>(Y.size() + 1, 0));
    //Arrow Table
    vector<vector<char>> directionTable (X.size() + 1,vector<char>(Y.size() + 1, 0));

    for(int i = 1 ; i< dp.size(); i++)
        for (int j = 1; j < dp[0].size(); j++) {
            if (X[i] == Y[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
                directionTable[i][j] = 'd'; 
            } else {
                if ( dp[i-1][j] > dp[i][j-1] ){
                    dp[i][j] = dp[i-1][j];
                    directionTable[i][j] = 'l';
                } else {
                    dp[i][j] = dp[i][j-1];
                    directionTable[i][j] = 'r';
                }
            } 
        }
    // Show max length of LCS
    cout <<"Length is :"<< dp[X.size()][Y.size()] << endl;

    //Print LCS
    int i=X.size(),j=Y.size();
    while (dp[i][j] != 0){
        cout << Y[i];
        if (directionTable[i][j] == 'd'){
            i--; j--;
        } else if (directionTable[i][j] == 'l'){
            i--;
        } else {
            j--;
        }
    }
   return 0;
}