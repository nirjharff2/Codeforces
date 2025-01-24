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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(m), q(k);
    for(int i=0; i<m; ++i) cin>>a[i];
    for(int i=0; i<k; ++i) cin>>q[i];
    vector<int> used(n+1);
    for(int i=0; i<k; ++i){
        used[q[i]] = 1;
    }
    int l = q.size();
    for(int i=0; i<m; ++i){
        if(l==n or (l==n-1 and !used[a[i]])){
            cout<<"1";
        } else{
            cout<<"0";
        }
    }
    cout<<"\n";
}
