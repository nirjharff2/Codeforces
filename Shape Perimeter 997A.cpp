#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x)
#else
#define debug(x);
#endif
void _print(auto x) { cerr << x << "\n";}
template<class T> void _print(vector<T> x) {cerr << "[ "; for (auto p : x) {cerr << p << " ";} cerr << " ]\n";}
void solve();
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    freopen("Err.txt", "w", stderr);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


void solve(){
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    n-=1;
    int ans = (4*m);
    while (n--){
        cin>>x>>y;
        ans = (ans - 2*((m-x)+(m-y))) + (4*m);
    }
    cout<<ans<<'\n';
    
}