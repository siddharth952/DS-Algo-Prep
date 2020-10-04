#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

/*
For maximal no of dominos in a MxN board M = 3 N = 10
 __________________________
| X X                     |
| X X      X X            |
|_________________________|
*/
int main(){

    int M,N;cin>>M>>N;
    cout<<(M*N)/2<<"\n"; 
    return 0;
}