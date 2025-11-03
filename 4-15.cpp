#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()
signed main(){

    int n;
    int mx = -2e9;
    while(cin >> n){
        if(n == 0) break;
        mx = max(mx, n);
    }
    cout << mx;
    
}