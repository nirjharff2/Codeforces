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
    string s;
    cin>>s;
    int ind = 0, n = s.size();
    for(int i=0; i<n; ++i){
        if(s[i]=='0'){
            ind = i;
            break;
        }
    }
    if(ind == 0){
        cout<<"1 "<<n<<" 1 1\n";
        return;
    }
    int len = n-ind, l2 = 0;
    string max = "0";

    for(int i=0; i<ind; ++i){
        int p = ind;
        string sbStr = "";

        for(int j=i; j<i+len; ++j){
            if(s[p]!=s[j]){
                sbStr+='1';
            } else{
                sbStr+='0';
            }
            p++;
        }

        if(sbStr>max){
            max = sbStr;
            l2 = i;
        }
    }

    cout<<"1 "<<n<<" "<<l2+1<<" "<<l2+len<<"\n";

}