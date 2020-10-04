#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second; // Compare coording to the finish times
}

int main(){
    int t, n , s, e;
    cin >> t;

    vector<pair<int, int> > v;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> s >> e;
            v.push_back(make_pair(s,e));
        }

        //Activity Selection Algo
        sort(v.begin(), v.end(), compare);
        
        //Start picking activities
        int cnt = 1;
        int finish = v[0].second;

        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= finish){
                cnt++;
                finish = v[i].second;
            }
        }
        cout<<cnt<<"\n";
        v.clear(); // Make sure to clear the vector after each test case
    }
    
    
    return 0;
}