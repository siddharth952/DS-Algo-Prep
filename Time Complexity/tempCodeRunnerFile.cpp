#include<iostream>
#include<vector>
using namespace std;
//Do
/*
Complexity O(N^2)

Best Case : O(1)
//=============|
*/

void selectionSort(int arr[], int length){
    int i, j,minimumIndex;
    for(int i=0;i<length - 1;i++) //Ignore last here eg if len = 5 then 0 1 2 3
    { 
        minimumIndex = i;

        for (int j = i+1; j < length; j++){
            cout<<"Comparing "<<arr[j]<<" and "<<arr[minimumIndex]<<endl;
             if (arr[j] < arr[minimumIndex])
                minimumIndex = j;  // Finding the smallest number in Array
        }
            
        // Settle ie Swap i and minimumIndex
         cout<<"Swapping "<<arr[i]<<" and "<<arr[minimumIndex]<<endl;
        int temp = arr[i];
        arr[i] = arr[minimumIndex];
        arr[minimumIndex] = temp;
    }
}

int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selectionSort(arr,n);
    for(auto a:arr) cout<<a<<"\n";
}