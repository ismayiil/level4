#include <bits/stdc++.h>

using namespace std;
int main(){

    int n; cin >> n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    n = abs(n);
    int ans = 0;
    while(n){
        ++ans;
        n /= 10;
    }
    cout << ans;
    
}