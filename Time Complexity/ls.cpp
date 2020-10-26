#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin>>n;

    vector<int> arr = {2,5,-6,23,11,23,6,8,1};
   
   for (int i = 0; i < arr.size(); i++)
        if ( arr[i] == n)
            cout << "Found at index: "<< i+1 ;
   
    return 0;
}