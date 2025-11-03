#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
int main(){

    int n; cin >> n;
    int a[n];
    fi(0,n) cin >> a[i];
    sort(a, a + n);
    cout << "max:" << a[n - 1] << "  min:" << a[0] << "  avr:" << a[(n + 1) / 2 - 1];


    int n; cin >> n;
    int mx = -2e9, mn = 2e9;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
    }
    cout << "max:" << mx << "  min:" << mn;
    
}