#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,cnt=0;cin>>n;
    while(n--){
        int p,v,to;
        cin>>p>>v>>to;
        cnt += (p+v+to >= 2)? 1 : 0;
    }
    cout<<cnt<<"\n";
    return 0;
}