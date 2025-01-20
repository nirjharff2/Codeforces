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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin>>arr[i];
    sort(begin(arr), end(arr));
    vector<int> cnt = {1};
    for(int i=1; i<n; ++i){
        if(arr[i]==arr[i-1]) cnt.back()++;
        else cnt.push_back(1);
    }
    sort(begin(cnt), end(cnt));
    debug(arr);
    debug(cnt);
    for(int i=0; i<cnt.size()-1; ++i){
        if(cnt[i]>k){
            cout<<cnt.size()-i<<"\n";
            return;
        }
        k-=cnt[i];
    }
    cout<<"1\n";
}
