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

void solve()
{
    int n; cin>>n;
    vi a(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }

    reverse(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
}

int main() { fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    getchar();
    return 0;
    
}