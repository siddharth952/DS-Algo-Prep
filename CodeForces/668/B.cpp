#include <bits/stdc++.h>
using namespace std;

#define en "\n"
#define INF (int) 9e18
#define HELL (int) (1e9 + 7)
//#define int long long
#define double long double
#define uint unsigned long long
#define pii pair<int, int>
#define pb push_back
#define fs first
#define sc second
//#define size(a) (int) a.size()
#define deb(x) cerr << #x << " => " << x << en
#define deba(x) cerr << #x << en; for (auto a : x) cerr << a << " "; cerr << en;
#define debp(x) cerr << #x << en; for (auto a : x)cerr<<"("<<a.fs<<", "<<a.sc<<") "; cerr << en;
#define debm(x) cerr << #x << en; for (auto a : x){for(auto b : a) cerr << b << " "; cerr << en;}
#define getMat(x, n, m, val) vector<vector<int>> x(n, vector<int> (m, val))
#define fastio ios_base :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define pout cout << fixed << setprecision(10)
int fastpow(int a, int b, int m = HELL) { int res = 1; a %= m;
while (b > 0) { if (b & 1) res = (res * a) % m; a = (a * a) % m; b >>= 1; } return res;}
#define inv(a) fastpow(a, HELL - 2)
#define mul(a, b) ((a % HELL) * (b % HELL)) % HELL


vector<int> F(vector<int> arr){
    vector<int> r;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            r.pb(arr[i]+arr[i+1]);   
        }
        return r;
}

int32_t main() { fastio;

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> permu;
        for(int i=0;i<n;i++){ //guaranteed that 𝑝 is a permutation
            int num;cin>>num;
            permu.pb(num);
        }
    // Begin
    // Output: a permutation such that 𝑝′≠𝑝 and 𝐹(𝑝′)=𝐹(𝑝).
    // 𝐹(𝑝)=sort([𝑝1+𝑝2,𝑝2+𝑝3,…,𝑝𝑛−1+𝑝𝑛]).

    // Soln is there
    bool flag = true;

    while(flag){
        
    }


    }
    
    
	return 0;
}