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

string conv(int p, int n){
    string s = "";
    for(int i=1; i<=n; ++i){
        if(i==p) continue;
        s+=to_string(i);
    }
    return s;
}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<string> qlist;
    for(int i=0; i<m; ++i){
        int p;
        cin>>p;
        qlist.push_back(conv(p, n));
    }
    string knwn = "";
    for(int i=0; i<k; ++i){
        int p;
        cin>>p;
        knwn+=to_string(p);
    }
    string ans = "";
    for(auto x:qlist){
        // x is my string to check if available inside knwn
        // as these are sorted, 2 pointer might work, lets see
        int i = 0, j = 0;
        while(i<knwn.size()){
            if(knwn[i]==x[j]){
                i++; j++;
            } else{
                i++;
            }
        }
        j=j-1;
        if(j==x.size()-1){
            ans+='1';
        } else{
            ans+='0';
        }
    }
    cout<<ans<<"\n";
    // seems like its working
    // ahh...it works but takes a lot of time which resulted in tle
    // i'll fix it later :')
}
