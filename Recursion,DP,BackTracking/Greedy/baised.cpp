#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

// GREEDY , ARRAYS
/*
    Prefered place in ranklist is given
    And for a ranklist we know would start 1...n for n teams
    We find the abs diff b/w and sum of each and select greedy 

*/

void testcase(){
    int n;cin>>n;
    string name;
    int place;

    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>name>>place;
        mp[place]++;
    }

    // Greedy
   


    int badness = 0;
    // Cal
    for (int i = 1; i <= n; i++)
    {
        
        badness += abs(vecP[i-1].second - i);
    }
    
    cout<<badness<<"\n";
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        testcase();
    }

    return 0;
}