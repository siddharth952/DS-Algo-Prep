#include<bits/stdc++.h>
using namespace std;
// https://www.lintcode.com/problem/range-addition/description

// 24/10/20

class Solution {
    vector<int> getModifiedArray(int length, vector<vector<int>> &updates) {
        vector<int> ans(length);
        
        for(int i=0;i<updates.size();i++) {
            int start = updates[i][0];
            int end = updates[i][1];
            int val = updates[i][2];
            
            ans[start] = val;
            ans[end+1] = -val;
          
        }
          rangeSum(ans);
        
        return ans;
            
    }
    void rangeSum(vector<int>& arr){
        //@i th sum of itself and last elements
        for (int i=1;i<arr.size();i++)
            arr[i] = arr[i-1] + arr[i];
    }
};