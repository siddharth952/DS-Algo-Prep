//https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/
#include <iostream>
#include <vector>
using namespace std;

int findPlatform(vector<int> arr, vector<int> dep, int n) {

    // Sort dep INC
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());

    int currMax = 1, oMax = 1;
    int i = 1, j = 0;
    while (i < n && j < n)
    {
        if(arr[i] <= dep[j]){
            i++;
            currMax++;
        }
            
        else if(arr[i] > dep[j]){
            j++;
            currMax--;
        }
            
            oMax = max(oMax, currMax);
    }
    return oMax;

}

int main(){

    vector<int> arr = { 900, 940, 950, 1100, 1500, 1800 }; 
    vector<int> dep = { 910, 1200, 1120, 1130, 1900, 2000 }; 
    int n = arr.size();
    cout << "Minimum Number of Platforms Required = "<< findPlatform(arr, dep, n); 
    return 0; 
}