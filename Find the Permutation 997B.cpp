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

vector<string> arr;

bool comp(int x, int y){
    if(arr[x][y]=='1'){
        return x<y;
    }
    else return x>y;
}

void solve(){
    int n;
    cin>>n;
    arr.resize(n);
    for(auto &x:arr){
        cin>>x;
    }
    vector<int> p(n);
    iota(p.begin(), p.end(), 0);
    sort(p.begin(), p.end(),comp);
    for(auto x:p){
        cout<<x+1<<" ";
    }
    cout<<"\n";
}
