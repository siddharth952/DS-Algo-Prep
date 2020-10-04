#include<bits/stdc++.h>
using namespace std;

/*
Can we use any other data strcutures in this?
Focus + Prepare + CP 
Scholarship - Paper 
*/

void swaparr(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int Apartition(int arr[], int lo, int hi,bool isRandom = false){
    int pivotElement = isRandom?rand():arr[hi]; //With and without random
    int i = lo;
    for( int j = lo ; i<hi ; i++){
        if(arr[j] < pivotElement){
            swaparr(arr,i,j);
        }
    }

    swaparr(arr,i,hi);
    return i;
}

void quickSort(int arr[] , int lo, int hi,bool isRandom = false){
    if(lo < hi) {
        int p = Apartition(arr,lo,hi,isRandom);
        quickSort(arr,lo, p -1);
        quickSort(arr, p+1, hi);
    }
}


int main(){
    //ifstream cin("input.txt");
    //ofstream cout("output1.txt");

    int t;cin>>t;
    while (t--)
    {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    
    quickSort(a,0,n,false);
    for(auto x:a) cout<<x<<" ";
    
    }

    return 0;
}