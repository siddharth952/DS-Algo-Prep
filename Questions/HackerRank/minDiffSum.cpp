#include<bits/stdc++.h>
// Time taken : 
// Answer Seen: Yes
// Working?: No not passing testcases
using namespace std;


/*arr of n, rearrange them so that the sum of the absolute differences of all adjacent elements is minimized
    1. Rearrange, 1,3 -> 1 2 | 


    Solved using Naive: O(n2).

                Efficient: 
                -sort ie, in ASC order to get min first then max element at the last 
                -These edge cases arrise due to the fact that we are trying to cal with the neibhours
                     edge case 1 : for 1st element min abs diff cal using 2nd
                     edge case 2 : for last element min abs diff cal using 2nd last element 
                - For rest cal with taking abs diff and the min of its neibhours

*/

int minDiff(vector<int> arr) {
    int n = arr.size();
    if (n==0) return 0;
    if (n==1) return abs(arr[0]);

    sort(arr.begin(),arr.end());

    int sum = 0;

    sum += abs(arr[0] - arr[1]);
    sum += abs(arr[n-1] - arr[n-2]);

    for (int i = 1; i < n-1; i++)
    {
        sum += min( abs(arr[i-1] - arr[i]) , abs( arr[i] - arr[i+1]));
    }
    
    return sum;



    //vector<int> ansArr(arr.size(),0);

    // //Edge Case:
    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (i == 0) ansArr[0] = (  abs(arr[0] - arr[1]) );
    //     else if (i == n - 1) ansArr[n-1] = ( abs(arr[n-2] - arr[n-1]));
    //     else{
    //         ansArr[i] = min( abs(arr[i-1] - arr[i]) , abs( arr[i] - arr[i+1]));
    //     }
    // }

    // return accumulate(ansArr.begin(),ansArr.end(),0);


}



int main(){
    vector<int> ansArr={11,4,5,7,0,1000,10,100,1000,10,0,0};
    cout<<minDiff(ansArr);
    return 0;
}