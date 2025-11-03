#include <bits/stdc++.h>

using namespace std;
int main(){

    int n; cin >> n;
    int ans = 0, rt = sqrt(n);
    for(int i = 1; i <= rt; i++){
        if(n % i == 0) ++ans;
    }
    ans *= 2;
    if(rt * rt == n) --ans;
    cout << 2 * ans;
    
}