#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
 
#define INF 1000000021
#define MOD 1000000007
#define pb push_back
#define sqr(a) (a)*(a)
#define M(a, b) make_pair(a,b)
#define T(a, b, c) make_pair(a, make_pair(b, c))
#define F first
#define S second
#define all(x) (x.begin(), x.end())
#define deb(x) cerr << #x << " = " << x << '\n'
#define N 222222
#define fastio ios_base :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
using namespace std;
//using namespace __gnu_pbds;
 
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
const ld pi = 2 * acos(0.0);
template<class T> bool umin(T& a, T b){if(a>b){a=b;return 1;}return 0;}
template<class T> bool umax(T& a, T b){if(a<b){a=b;return 1;}return 0;}
template<class T, class TT> bool pal(T a, TT n){int k=0;for(int i=0;i<=n/2;i++){if(a[i]!=a[n-i-1]){k=1;break;}}return k?0:1;}



//String Task
void stringTask(){
    //deletes all the vowels,
    // Add . before each consonant
    //replaces all uppercase consonants with lowercase 

    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++)
    {
        if (isupper(s[i]))
            s[i]=tolower(s[i]);
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
            continue;
        else
            cout<<'.'<<s[i];
    }

}


void littleElephantFunction(){
    int n;//0...n
    cin>>n;
    
    //a is a permutation of an integers from 1 to n
    //ai denotes the i-th element of the permutation
    // First no won't be Affected   
    cout<<n<<" ";
    for (int i = 1; i < n; i++)
    {
        cout<<i<<" ";
    }

}



int main(){
    //stringTask();
    littleElephantFunction();
    return 0;
}

