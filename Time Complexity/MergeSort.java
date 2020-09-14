#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int p ,int q, int r){
    int n1 = (q-p) + 1; // No. of elements
    int n2 = (r - q);
    int L[n1],R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i - 1];
    for (int j = 0; j < n2; j++)
        R[j] = arr[q+j];

    int i=0,j=0;
    int ans[n1+n2];
    for (int k = p; k < r; k++){
        if(L[i] <= R[j]){
            ans[k] = L[i];
            i++;
        }
        else{
            ans[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int arr[], int p , int r){
    // Divide , Recursively call
    int q = 0;
    if (p < r)
     q  = floor((p+r/2));
    
    mergeSort(arr,p,q);
    mergeSort(arr,q+1,r);

    merge(arr,p,q,r);

}



int main(){
    int a[] = {2,4,6,7,1,34,31,78}; 
    mergeSort(a,0,8);
    for(int p:a) cout<<p<<" ";

    return 0;
}