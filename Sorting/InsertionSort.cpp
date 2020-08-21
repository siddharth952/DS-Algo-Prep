#include<iostream>
#include<vector>
using namespace std;
/*

Useful when array is already partially sorted, min no of (swaps&comparisions) are required in such a case.

Time: O(N^2) As 1 + 2 + 3 + ... + N-1 = (N*N-1)/2
Space: O(1) As inplace 

//=============|
// Implementaion ==|>
//=============|
*/
void insertSort(int arr[],int len);
void printArray(int arr[],int len);

int main(){
    int arr[6] = {5, 1, 6 ,2 ,3, 10};
    insertSort(arr,6);
    for(auto a:arr) cout<<a<<",";
}

void insertSort(int arr[], int length){
    int i, j, key;
    for (int i = 1; i < length; i++)
    {
        key = arr[i]; // [1(Already sorted), 5<---, 12]
        j = i-1; // [1<---, 5, 12 ] i-1 as we need prevous of i ie j
        
        while (j >= 0 and arr[j] > key /*> As 12 needs to be greater than previous*/) {
            arr[j+1] = arr[j]; // [1<---j, 5<---j+1, 12 ]
            j--;
        }
        arr[j+1] = key; // Insert here
    }
    
}

//=============|
// Questions ==|>
//=============|

//1 Colored Rectangle (Sorting , DP, Greedy)

// void coloredRectangle(){


//     int R,G,B = 0;
//     cin>>R>>G>>B;
//     vector<int> arrR,arrG,arrB;
//     while(R>0){ int t;cin>>t;arrR.push_back(t); }
//     while(G>0){ int t;cin>>t;arrG.push_back(t); }
//     while(B>0){ int t;cin>>t;arrB.push_back(t); }


// }


