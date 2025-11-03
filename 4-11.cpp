#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()
signed main(){

    vector<int> fib = {1, 1};
    int son = 2;
    while(son < 1000){
        fib.push_back(son);
        son = fib[sz(fib) - 1] + fib[sz(fib) - 2];
    }
    for(int i:fib) cout << i << ' ';
    
}