#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {0,1,1,0,0,0,1};
    // 2 regions are created i-> just after 0s, j just after 1s
    int i=0,j=0;
    while(j < arr.size())
    {
        if (arr[j] == 1)
            j++;
        else if (arr[j] == 0){
            swap(arr[i],arr[j]);
            i++,j++;
        }
            
    }

    for(int a : arr)
        cout << a;
    return 0;
}