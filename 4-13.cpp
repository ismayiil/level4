#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()
signed main(){

    bool i = 1;
    int n;
    int sum[2] = {0,0};
    while(cin >> n){
        sum[i] += n;
        i = !i;
    }
    cout << "odd sum: " << sum[1] << "  even sum: " << sum[0];
    
}